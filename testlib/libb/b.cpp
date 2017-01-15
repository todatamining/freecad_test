#include "b.h"
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}

template<typename T>
Base<T>::Base()
{
    cout<<"base"<<endl;
}
