#pragma once
#include "FCConfig.h"
#include "Base/Persistence.h"
#include "Base/Writer.h"
#include "Base/Reader.h"

class TestWriter : public Base::Persistence
{
public:
    unsigned int getMemSize (void) const override{return 0;};
    void Save (Base::Writer &/*writer*/) const  override;
    void Restore(Base::XMLReader &/*reader*/) override {}
};

