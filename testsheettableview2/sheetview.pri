CONFIG+=c++14
QT+=widgets xml printsupport uitools network opengl svg

INCLUDEPATH += /usr/include/python2.7/ ../  ./

LIBS +=  -L/usr/lib/python2.7/config-x86_64-linux-gnu -lpython2.7
LIBS +=  -L/usr/lib/x86_64-linux-gnu -lXdmf
LIBS +=  -lz -lxerces-c 
LIBS +=  -L/usr/include/boost/ -lboost_system -lboost_regex -lboost_signals -lboost_program_options
LIBS +=  -L/usr/lib/x86_64-linux-gnu/ -lCoin

