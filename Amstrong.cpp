#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int no1, no2, ctr;
    cin >> no1 >> no2;
    for (int i = no1; i <= no2; i++)
    {

        int n = i;
        string s = toString(i);
        int len = s.length();
        int sum = 0;

        while (n > 0)
        {
            int digit = n % 10;
            n = n / 10;
            sum = sum + (int)pow(digit, len);
        }

        if (sum == i)
        {
            cout << i;
            ctr++;
        }
    }

        if (ctr == 0)
            cout << -1;
        return 0;
    