!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}



INCLUDEPATH += ../Build

LIBS += -L../CXX -lcxx

SOURCES += *.cpp *.c

HEADERS += *.h 

TEMPLATE = lib
TARGET = base

