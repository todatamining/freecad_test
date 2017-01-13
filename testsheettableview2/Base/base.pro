!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

INCLUDEPATH += ../Build

SOURCES += *.cpp

HEADERS += *.h 

TEMPLATE = lib
TARGET = base

