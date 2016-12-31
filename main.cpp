#include "FCConfig.h"

#include "Base/Persistence.h"

using namespace Base;

class Test : public Persistence
{
public:
    unsigned int getMemSize (void) const override{return 0;};
    void Save (Writer &/*writer*/) const  override {}
    void Restore(XMLReader &/*reader*/) override {}
 
};

int main()
{

}
