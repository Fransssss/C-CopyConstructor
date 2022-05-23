// Implementation of FunClass

#include "FunClass.h"
#include <iostream>
using std::cout;
using std::endl;

FunClass::FunClass()                    // function class
{
    cout << "[Default Constructor called]" << endl;
    _value = new int;                   // a pointer needs to be allocaed a space 1st before assigning value
    *_value = 0;                        // set default value to 0
}

FunClass::FunClass(const FunClass& origObj)
{
    cout << "[Copy Constructor called]" << endl;
    _value = new int;                  // allocate space before asign a value
    *_value = *(origObj._value);       // this copy the value in parameter(
}

void FunClass::SetVal(const int &val)
{
    cout << "[Set new value]" << endl;
    *_value = val;
}

int FunClass::GetVal() const
{
    return *(_value);                  // return the value that a the pointer points to
}

FunClass::~FunClass()
{
    cout  << "[Destructor called]" << endl;
    delete _value;                    // clean block of memory that's allocated
}


