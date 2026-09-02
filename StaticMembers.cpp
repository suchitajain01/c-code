#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count; //all objects share this since it is static

public: 
   void setData(void)
   {
    cout<<"enter the id"<<endl;
    cin>>id;
    count++;
   }
   void getData(void)
   {
        cout<<"The id of this employee  is" <<id<< "and this is employee number"<<count<<endl;
   }

   static void getCount(void)
   {
    //cout<id; //throws an error
    cout<<"the value of count is "<<count<<endl;
   }

};


int Employee :: count = 1000; //default value is 0
 
int main()
{
    // count is static  data member of class employee
    Employee harry, rohan, lavish;//sharing same count variable

    harry.setData();
    harry.getData();
    Employee:: getCount();

    rohan.setData();
    rohan.getData();
    Employee:: getCount();

    lavish.setData();
    lavish.getData();
    Employee:: getCount();

    return 0;
} 
    





    


