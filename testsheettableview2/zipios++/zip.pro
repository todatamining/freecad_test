!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

SOURCES += *.cpp

HEADERS += *.h 

TEMPLATE = lib
TARGET = zipios++

