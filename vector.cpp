#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>num(10);
    int i;     

    for( i = 0;i <10;i++)
    {
        cin>>num[i];
    }


   // For addition in vectors
    num. push_back(43);
    num.push_back(21);
    cout<<endl;

    for(i = 0 ;i<10;i++)
    {
    cout<<num[i]<<endl;;
    }


    cout<< '/n' << "element at "<<num.at(5)<<endl;

    return 0 ;
}



/*

pop_up is deletion operator 

size() returns number of elemtns present in vector
clear()removes all element of the array
front() returns the first element of the vector
back()  returns the last element of the vector
empty() returns 1(true) if vector is empty
capacity() checks the overall size of a vector


*/





/*
int main()
{

  vector<int>num{2,3,4,5,6};
     for(int i = 0;i<5;i++)
     {
        cout<<num[i]<<endl;

     }

     num.push_back
  



*/





