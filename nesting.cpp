#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;  // s is private member of class binary ; bydefault class me sab private hota hai
 public://calling these functions 
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};



  void binary :: read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
};



   void binary :: chk_bin(void) // to check wheather number is binary
{
    for (int i = 0; i< s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!= '1')
       {
        cout<<"incorrect binary format:"<<endl;
        exit(0);
       }
    }

}
  void binary :: ones(void)
  {
    for(int i =0; i<s.length(); i++)
   {
      if(s.at(i) == '0')
      {
        s.at(i) = '1';
      }
      else 
      {
        s.at(i) = '0';
      }
    }
  }

   

   void binary :: display(void)
   {
    cout<<"displaying your binary number"<<endl;
    for ( int i =0; i< s.length() ; i++)
    {
        cout<<s.at(i);
    }
       
   }



    //opps - classes and objects
    //c++ - >intially called --> C with classes by strostroup
    // structures had limitations
    //  --->members are public 
    // ---> No methods
    // classes ---> structues + more
    // classes ---> can make few members as private and public
    // classes --> can have methods and properties
    // structures in c++ are typefed
    // you can declare objects along with class declaration
    
    /* class employee
    {// class defination
    } haarry,rohan,lavish;*/ // objects
     // harry.salary = 8 make no sense if salary is private
     int main()
     {
     binary b;       // binary number create
      b.read();      // 
      b.chk_bin();  //check wheather binary or not
      b.ones();      // ones complement 
      b.display();   
      return 0;
    }


