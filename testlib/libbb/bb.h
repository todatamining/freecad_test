#pragma once
#include "../libb/b.h"

int mult(int, int);

class Derive: public Base<Derive>
{
public:
    Derive();
};

