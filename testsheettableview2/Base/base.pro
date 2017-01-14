!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

INCLUDEPATH += ../Build

SOURCES += *.cpp *.c

HEADERS += *.h 

TEMPLATE = lib
TARGET = base

