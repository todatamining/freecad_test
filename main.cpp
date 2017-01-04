#include "FCConfig.h"
#include "testwriter.h"

using namespace Base;


int main()
{
    FileWriter fw("./output");
    fw.putNextEntry("Document.xml");

    TestWriter tw;
    tw.Save(fw);

    fw.writeFiles();
}
