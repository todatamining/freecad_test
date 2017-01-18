
#include <iostream>
#include "FCConfig.h"
#include <QGuiApplication>
#include "../Spreadsheet/SpreadGui/SheetTableView.h"
extern "C"
{
#include "PyTools.h"
}
using namespace std;
using namespace SpreadsheetGui;
int main(int argc, char *argv[])
{

    //PP_Run_Command_Line("");
    QGuiApplication app(argc, argv);
    SheetTableView st;
    st.show();
    app.exec();
}
