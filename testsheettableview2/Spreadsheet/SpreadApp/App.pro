######################################################################
# Automatically generated by qmake (3.0) Wed Jan 11 21:49:37 2017
######################################################################
!include( ../../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}
INCLUDEPATH += ../../Build ../..

LIBS +=  -L../../CXX -lcxx
#LIBS +=  -L../../App -lapp
LIBS +=  -L../../Base -lbase
LIBS +=  -L../../Gui -lGui
LIBS +=  -L../../zipios++ -lzipios++
TEMPLATE = lib
TARGET = spreadapp

# Input
HEADERS += Cell.h \
           DisplayUnit.h \
           PreCompiled.h \
           PropertyColumnWidths.h \
           PropertyRowHeights.h \
           PropertySheet.h \
           Sheet.h \
           SheetObserver.h \
           Utils.h
SOURCES += AppSpreadsheet.cpp \
           Cell.cpp \
           genregexps.cpp \
#           lex.ExpressionParser.c \
           PreCompiled.cpp \
           PropertyColumnWidths.cpp \
           PropertyColumnWidthsPyImp.cpp \
           PropertyRowHeights.cpp \
           PropertyRowHeightsPyImp.cpp \
           PropertySheet.cpp \
           PropertySheetPyImp.cpp \
           Sheet.cpp \
           SheetObserver.cpp \
           SheetPyImp.cpp \
           Utils.cpp
