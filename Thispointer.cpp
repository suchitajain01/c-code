#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    // A & setData(int a)
     void SetData(int a)
    {
        this->a = a;
       // return *this;
    }
    void getData()
    {
        cout<<"the value of a:"<<a<<endl;
    }
};

int main()
{
    //this is the keyword which is pointer which points to the object whcih invokes the member function
    A a;
    a.SetData(4);
    a.getData();
    return 0;

}