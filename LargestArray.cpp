#include<bits/stdc++.h>
using namespace std;

/*Given as array of postivr integers arr[] return the second largest from the array. If the second 
largest elements from the array,if it does not exist return -1

*/

int main()
{
 
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i = 0 ; i< n ;i++)
{
    cin>>v[i];
}

sort(v.begin() , v.end());
for(int num : v)
{
    cout<<num<<" ";

}

cout<<endl;


return 0;
}




  








}