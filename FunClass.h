// Declaration of FunClass

#ifndef C_COPYCONSTRUCTOR_FUNCLASS_H
#define C_COPYCONSTRUCTOR_FUNCLASS_H

class FunClass
{
private:
    int* _value;
public:
    FunClass();                             // default constructor
    FunClass(const FunClass& origObj);      // this is the Copy constructor - prevent shallow copy and double delete
    void SetVal(const int& val);
    int GetVal()const;
    ~FunClass();                            // delete new block of memory that's creation duringg runtime;
};



#endif //C_COPYCONSTRUCTOR_FUNCLASS_H
