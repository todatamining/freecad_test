// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StackWalker.h"
#include <iostream>

using namespace std;

void InitMiniDumpWriter(const std::string& filename);

void testCrash()
{
	int *p = 0;
	p[20] = 123;
}


int _tmain(int argc, _TCHAR* argv[])
{
	InitMiniDumpWriter("j:/crash.dmp");
	testCrash();
	return 0;
}


#if defined(_MSC_VER)
#include <windows.h>
#include <dbghelp.h>

typedef BOOL(__stdcall *tMDWD)(
	IN HANDLE hProcess,
	IN DWORD ProcessId,
	IN HANDLE hFile,
	IN MINIDUMP_TYPE DumpType,
	IN CONST PMINIDUMP_EXCEPTION_INFORMATION ExceptionParam, OPTIONAL
	IN CONST PMINIDUMP_USER_STREAM_INFORMATION UserStreamParam, OPTIONAL
	IN CONST PMINIDUMP_CALLBACK_INFORMATION CallbackParam OPTIONAL
	);

static tMDWD s_pMDWD;
static HMODULE s_hDbgHelpMod;
static MINIDUMP_TYPE s_dumpTyp = MiniDumpNormal;
static std::string s_szMiniDumpFileName;  // initialize with whatever appropriate...

#include "StackWalker.h"
class MyStackWalker : public StackWalker
{
	DWORD threadId;
public:
	MyStackWalker() : StackWalker(), threadId(GetCurrentThreadId())
	{
		//std::string name = App::Application::Config()["UserAppData"] + "crash.log";
		//Base::Console().AttachObserver(new Base::ConsoleObserverFile(name.c_str()));
	}
	MyStackWalker(DWORD dwProcessId, HANDLE hProcess) : StackWalker(dwProcessId, hProcess) {}
	virtual void OnOutput(LPCSTR szText)
	{
		cout << "Id:" << threadId << "," << szText;
		//StackWalker::OnOutput(szText);
	}
};

static LONG __stdcall MyCrashHandlerExceptionFilter(EXCEPTION_POINTERS* pEx)
{
#ifdef _M_IX86 
	if (pEx->ExceptionRecord->ExceptionCode == EXCEPTION_STACK_OVERFLOW)
	{
		// be sure that we have enought space... 
		static char MyStack[1024 * 128];
		// it assumes that DS and SS are the same!!! (this is the case for Win32) 
		// change the stack only if the selectors are the same (this is the case for Win32) 
		//__asm push offset MyStack[1024*128]; 
		//__asm pop esp; 
		__asm mov eax, offset MyStack[1024 * 128];
		__asm mov esp, eax;
	}
#endif 
	MyStackWalker sw;
	sw.ShowCallstack(GetCurrentThread(), pEx->ContextRecord);
	cout << "*** Unhandled Exception!\n"<< endl; 
	cout << "   ExpCode: 0x%8.8X" << pEx->ExceptionRecord->ExceptionCode<< endl; 
	cout << "   ExpFlags: %d" << pEx->ExceptionRecord->ExceptionFlags<< endl; 
	cout << "   ExpAddress: 0x%8.8X" << pEx->ExceptionRecord->ExceptionAddress<< endl; 

	bool bFailed = true;
	HANDLE hFile;
	hFile = CreateFile(s_szMiniDumpFileName.c_str(), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile != INVALID_HANDLE_VALUE)
	{
		MINIDUMP_EXCEPTION_INFORMATION stMDEI;
		stMDEI.ThreadId = GetCurrentThreadId();
		stMDEI.ExceptionPointers = pEx;
		stMDEI.ClientPointers = true;
		// try to create an miniDump: 
		if (s_pMDWD(
			GetCurrentProcess(),
			GetCurrentProcessId(),
			hFile,
			s_dumpTyp,
			&stMDEI,
			NULL,
			NULL
			))
		{
			bFailed = false;  // suceeded 
		}
		CloseHandle(hFile);
	}

	if (bFailed)
	{
		return EXCEPTION_CONTINUE_SEARCH;
	}

	// Optional display an error message 
	// FatalAppExit(-1, ("Application failed!")); 


	// or return one of the following: 
	// - EXCEPTION_CONTINUE_SEARCH 
	// - EXCEPTION_CONTINUE_EXECUTION 
	// - EXCEPTION_EXECUTE_HANDLER 
	return EXCEPTION_CONTINUE_SEARCH;  // this will trigger the "normal" OS error-dialog 
}

void InitMiniDumpWriter(const std::string& filename)
{
	if (s_hDbgHelpMod != NULL)
		return;
	s_szMiniDumpFileName = filename;

	// Initialize the member, so we do not load the dll after the exception has occured
	// which might be not possible anymore...
	s_hDbgHelpMod = LoadLibrary(("dbghelp.dll"));
	if (s_hDbgHelpMod != NULL)
		s_pMDWD = (tMDWD)GetProcAddress(s_hDbgHelpMod, "MiniDumpWriteDump");

	// Register Unhandled Exception-Filter:
	SetUnhandledExceptionFilter(MyCrashHandlerExceptionFilter);

	// Additional call "PreventSetUnhandledExceptionFilter"...
	// See also: "SetUnhandledExceptionFilter" and VC8 (and later)
	// http://blog.kalmbachnet.de/?postid=75
}
#endif