#include<iostream>
using namespace std;

class Shop
{
    int id;
    float price;
    public:
    void setData(int a,int b)
    {
    id = a;
    price = b;
    }
     void getData(void)
     {
        cout<<"code of this item is:"<<id<<endl;
        cout<<"price of this tem is:"<<price<<endl;

     }
};

int main()
{
 int size = 3;
 //int *ptr = &size;
 //int *ptr = new int[34];
// general store 
// veggies
// hardware


 Shop *ptr = new Shop[size];
 Shop *ptrTemp = ptr;
 int p,i;
 float q;
 for(int i = 0; i<size ; i++)
 {
   cout<<"enter id and price of item :"<< i+1;
   cin>>p>>q;
   //(*ptr).setData;
   ptr ->setData(p,q);
   ptr++;
   
 }


for (int i = 0; i < size ; i++)
{
  cout<<"item number :"<<i+1<<endl;
  ptr->getData();
  ptrTemp++; 
  

}
return 0;
}