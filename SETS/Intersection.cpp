#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int>&A, vector<int>&B, int m, int n)
{
vector<int> C;
    int i =0, j = 0, k =0;

    while( i <=m && j<=n)
    {

        if(A[i] < B[j])
        {
            C.push_back(A[i]);
         i++; 

        }

     else if(B[j]<A[i])
     {
        C.push_back(B[j]);
        j++;
     }

     else

     {
          C[k] = A[i];
          i++;
          j++;
          k++;

     }


    }
    return C;


};

int main()
{
vector<int>A;
vector<int>B;
vector<int>C;
A.push_back(10);
A.push_back(20);
A.push_back(30);
A.push_back(40);

B.push_back(10);
B.push_back(50);
B.push_back(40);
A.push_back(70);

intersectionArray(A,B,3,3);
vector<int>C;

for(int i =0;i< C.size();i++)
{
    cout<<C[i]<< " "<<endl;
}


}

