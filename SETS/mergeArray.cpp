
#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &A,vector<int> &B, int m, int n)
{
    int i = 0, j = 0, k = 0;
    vector<int> C;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C.push_back(A[i]);
            i++;
        }

        else

        {

            C[k] = A[j];
            j++;
            k++;
        }
    }

    while (i < m)//if any element left 
    {
       C.push_back(A[i]);
       i++;
    }

    while (j < n)
    {
       C.push_back(B[j]);
       j++;
    }

    for (int i = 0; i < C.size();i++)
    {

        cout<<  C[i]<<" ";
    }

};
    
int main()
{

vector<int>A;
A.push_back(10);
A.push_back(20);
A.push_back(30);
A.push_back(60);



vector<int>B;
B.push_back(20);
B.push_back(30);
B.push_back(40);
B.push_back(50);

Merge(A, B,4,4);

return 0;

}