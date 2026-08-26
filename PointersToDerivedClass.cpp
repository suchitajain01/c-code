#include <iostream>
using namespace std;

//compile time polymorphism
//function overriding

class BaseClass
{
    public:
    int var_base;
    void display()
    {
        cout<<"displaying base class variable var_base :"<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var_base" << var_base << endl;
        cout << "displaying derived class variable var_derived:" << var_derived << endl;
    }
};


int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;

    return 0;
}
