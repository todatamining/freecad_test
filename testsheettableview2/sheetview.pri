QT+=widgets
INCLUDEPATH += /usr/include/python2.7/ ../  ./
#INCLUDEPATH+=./Base
#INCLUDEPATH+=./Gui
#INCLUDEPATH+=./App
#INCLUDEPATH+=./Spreadsheet

CONFIG+=c++14
QT+=xml
QT+=printsupport
QT+=uitools
QT+=network
QT+=opengl
QT+=svg

LIBS +=  -L/usr/lib/python2.7/config-x86_64-linux-gnu -lpython2.7
LIBS +=  -L/usr/lib/x86_64-linux-gnu -lXdmf
LIBS +=  -lz -lxerces-c -lboost_system -lboost_regex -lboost_signals
LIBS +=  -L/usr/lib/x86_64-linux-gnu/ -lCoin


INCLUDEPATH += ../../../include


