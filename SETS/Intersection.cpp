#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int>& A, vector<int>& B, int m, int n)
{
    vector<int> C;

    int i = 0, j = 0;

    while (i <= m && j <= n)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            C.push_back(A[i]);
            i++;
            j++;
        }
    }

    return C;
}

int main()
{
    vector<int> A;
    vector<int> B;

    A.push_back(10);
    A.push_back(20);
    A.push_back(30);
    A.push_back(40);

    B.push_back(10);
    B.push_back(50);
    B.push_back(40);
    B.push_back(70);

    vector<int> C = intersectionArray(A, B, 3, 3);

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}