#include "../libb/b.h"
#include "bb.h"

int mult(int a, int b)
{
    return a* add(b, 10);
}

Derive::Derive()
    :Base<int>()
{}
