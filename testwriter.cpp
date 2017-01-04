#include "testwriter.h"

#include <iostream>

using MyMap = std::map<std::string, double>;
using namespace Base;
using namespace std;

void TestWriter::Save (Writer &writer) const
{
    MyMap mp {
        {"hello", 0.01},
        {"world", 1.23},
        {"test", 123.33},
        {"freecad", 234}
    };
    size_t size = mp.size();

    writer.incInd(); // indentation for 'Properties Count'
    writer.Stream() << writer.ind() << "<Properties Count=\"" << size << "\">" << endl;


    MyMap::iterator it;
    for (it = mp.begin(); it != mp.end(); ++it)
    {
        // Don't write transient properties 
        writer.incInd(); // indentation for 'Property name'
        writer.Stream() << writer.ind() << "<Property name=\"" << it->first << "\" type=\""
            << it->second << "\">" << endl;;
        writer.Stream() << writer.ind() << "</Property>" << endl;
        writer.decInd(); // indentation for 'Property name'
    }
    writer.Stream() << writer.ind() << "</Properties>" << endl;
    writer.decInd(); // indentation for 'Properties Count'
}
