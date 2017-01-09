#/usr/bin/python2.7 generate.py --outputPath src/App/ PropertyContainerPy.xml
$qmake -project QT+=widgets INCLUDEPATH+=/usr/include/python2.7/ INCLUDEPATH+=./Base INCLUDEPATH+=./Gui INCLUDEPATH+=./App INCLUDEPATH+=./Spreadsheet CONFIG+=c++14 QT+=xml QT+=printsupport QT+=uitools QT+=network QT+=opengl  QT+=svg && qmake && make 


