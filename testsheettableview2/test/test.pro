!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

QT += widgets gui
TEMPLATE = app
TARGET = test

INCLUDEPATH += ../Build
INCLUDEPATH += ../Base
INCLUDEPATH += . ../Spreadsheet/

LIBS +=  -lz
LIBS +=  -L../Spreadsheet/SpreadGui -lspreadgui
LIBS +=  -L../Spreadsheet/SpreadApp -lspreadapp
LIBS +=  -L../Gui -lGui
LIBS +=  -L../App -lapp
LIBS +=  -L../Base -lbase
LIBS +=  -L../zipios++ -lzipios++
LIBS +=  -L../CXX -lcxx



SOURCES += *.cpp

HEADERS += *.h 


