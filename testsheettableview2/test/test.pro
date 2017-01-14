!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

TEMPLATE = app
TARGET = test

INCLUDEPATH += ../Build
INCLUDEPATH += ../Base

LIBS +=  -L../CXX -lcxx
LIBS +=  -L../App -lapp
LIBS +=  -L../Base -lbase
LIBS +=  -L../Gui -lGui
LIBS +=  -L../zipios++ -lzipios++



SOURCES += *.cpp

HEADERS += *.h 


