#include<iostream>
using namespace std;


class Employee
{
 int id;
 int salary;
 public:
      void setId(void)
      {
        salary = 122;
        cout<<"enter id of the employee"<<endl;
        cin>>id;
      }

      void getId(void)
      { 
        cout<<"the id of this employee:"<<id<<endl;
      }
};

int main()
{
  // employee harry,rohan ;
  Employee fb[4];
  for(int i = 0; i<4;i++)
 {
    fb[i].getId();
    fb[i].setId();
 }
}