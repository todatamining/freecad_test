!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

INCLUDEPATH += ../Spreadsheet/SpreadApp/

SOURCES += *.cpp

HEADERS += *.h 

TEMPLATE = lib
TARGET = app

