#include <bits/stdc++.h>
using namespace std;

void UnionArray(vector<int> &A, int m, int n, vector<int> &B,vector<int>&C)
{
    vector<int> C;

    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {

        if (A[i] < B[j])
        {
           C.push_back(A[i]);
            i++;
            k++;
        }
        else if (A[i] > B[j])
        {
            C.push_back(B[j]);
            k++;
            j++;
        }

        else

        {
            C.push_back(A[i]);
            i++;
            j++;
            k++;
        }
    }

    while (i < m)
    {
        C.push_back(A[i]);
        i++;
        k++;
    }

    while (j < n)
    {

        C.push_back(B[j]);
        j++;
        k++;
    }
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> A(m);
    vector<int> B(n);
    vector<int> C;

    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> B[j];
    }

     UnionArray(A,m,n,B,C);

     for(int i =0;i<C.size();i++)
     {

    cout<<C[i]<<" "<<endl;


     }

}