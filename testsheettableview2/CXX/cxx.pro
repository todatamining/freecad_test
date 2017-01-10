!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

SOURCES += *.cxx

HEADERS += *.h *.hxx

TEMPLATE = lib
TARGET = cxx

