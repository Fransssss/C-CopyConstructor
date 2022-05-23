// Title: Copy constructor
// Purpose:  Practice copy constructor - pass by value,value of a class, makes sure it's not modified the original value (copy only)
// Author:

#include <iostream>
#include "FunClass.h"

using std::cout;
using std::endl;

void Test(FunClass locObj)                  // function to test copy constructor
{
    int test = 0;
    test = (locObj.GetVal()) * 2;           // return the sqrt value
    cout << "The sqrt value is " << test  << endl;
}

int main()
{
    cout << endl;
    FunClass fClass;                  // object of FunClass
    cout << "Default Value of fClass: " << fClass.GetVal() << endl;

    cout << endl;
    fClass.SetVal(10);
    cout << "fClass value now: " << fClass.GetVal() << endl;

    cout << endl;
    Test(fClass);

    cout << endl;
    fClass.SetVal(10);
    cout << "fClass value now: " << fClass.GetVal() << endl;
  return 0;
}

