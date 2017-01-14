!include( ../sheetview.pri ) {
    error( "Couldn't find the sheetview.pri file!" )
}

CONFIG += staticlib
LIBS +=  -LPython2 -lpy2

SOURCES +=  \
            cxxextensions.c \
            cxx_extensions.cxx \
            cxxsupport.cxx \
            IndirectPythonInterface.cxx \
            Python2/cxxextensions.c \
            Python2/cxx_extensions.cxx \
            Python2/cxxsupport.cxx

HEADERS += *.h \ 
            *.hxx \
            Python2/Config.hxx \
            Python2/CxxDebug.hxx \
            Python2/Exception.hxx \
            Python2/ExtensionModule.hxx \
            Python2/ExtensionOldType.hxx \
            Python2/Extensions.hxx \
            Python2/ExtensionTypeBase.hxx \
            Python2/ExtensionType.hxx \
            Python2/IndirectPythonInterface.hxx \
            Python2/Objects.hxx \
            Python2/PythonType.hxx


TEMPLATE = lib
TARGET = cxx

