#include <bits/stdc++.h>
using namespace std;

vector<int> SymmetricdifferenceSet(vector<int>&A, int m ,int n, vector<int>&B)
{
    vector<int>C;
int i =0, j =0, k =0;
while(i<m && j<n)
{

    if(A[i]<B[j])
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
        i++;
        j++;
    }

}

while(j<n)
{
C.push_back(B[j]);
j++;
k++;

}

while(i<m)
{

C.push_back(A[i]);
i++;
k++;

}


return C;

};


int main()
{

int m , n;


vector<int>A(m);
vector<int>B(n);

for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> B[j];
    }
    vector<int> C = SymmetricdifferenceSet(A, m, n, B);
     for(int i =0;i<C.size();i++)
     {

    cout<<C[i]<<" "<<endl;


     }


}
