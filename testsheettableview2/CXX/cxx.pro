!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

CONFIG += staticlib

SOURCES +=  \
            cxxextensions.c \
            cxx_extensions.cxx \
            cxxsupport.cxx \
            IndirectPythonInterface.cxx 

HEADERS += *.h \ 
            *.hxx 

TEMPLATE = lib
TARGET = cxx

