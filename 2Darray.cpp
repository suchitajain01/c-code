#include <iostream>
using namespace std;
int main()
{
/*
{
    int a[2][2] = {(2,3)(3,4)};
    for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
     {
      
        cin >> a[i][j];

     }
     
}
}
*/
// 2D ARRAY

int a[3][3], b[3][3], c[2][3],i,j; // the subscript number represents the size of array 
cout<<"enter the element of the 1st matrix:";
for(i = 0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
}
cout<<"enter the element of the 2rd matrix";
for(i = 0;i<3;i++)
{
   for(j =0; j < 3; j ++)

   {
    cin>>b[i][j];
   }

}
cout<<"The addition of the matrix:";

    for(i = 0;i<3;i++)
    {
        for(j = 0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}