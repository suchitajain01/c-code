#include<iostream>
using namespace std;
class BaseClass
{
    public:
    int var_base;
    void display()
    {
        cout<<"dispalying base class variable var_base "<< var_base <<endl;
    }



};

class DerivedClass : public BaseClass
{
 public:
 int var_derived;
 void display()
 {
    cout<<"displaying base class variable var_derived "<<var_base <<endl;
    cout<<"displaying derived class variable var_derived "<<var_derived<<endl;

 }


};

int main()
{

 BaseClass * base_class_pointer;
 BaseClass obj_base;
 DerivedClass obj_derived;
 base_class_pointer = &obj_derived; //base class ke pointer ko derived class ke object se point kraya 
 
 base_class_pointer->var_base = 34;
 //base_class_pointer->var_derived = 134;//throws an error
 base_class_pointer->display();

DerivedClass * derived_class_pointer;
derived_class_pointer = &obj_derived;

derived_class_pointer->var_base= 9448;
derived_class_pointer->var_derived = 98;
derived_class_pointer->display();

return 0;


}