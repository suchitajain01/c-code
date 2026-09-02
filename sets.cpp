/*Given an array of N integers. Print the unique elements from the
array in increasing order. Also print the count of unique
elements. See sample below.
I/P Format First line of input contains the value of N. The second line
contains N space separated integers.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> uniqueElements;
    int x;

    for (int i = 0; i < N; i++) {
        cin >> x;
        uniqueElements.insert(x);
    }

    // Print unique elements in increasing order
    for (int num : uniqueElements) {
        cout << num << " ";
    }
    cout << endl;

    // Print count of unique elements
    cout << uniqueElements.size() << endl;

    return 0;
}

/* 
Given two strings S1 and S2, having lengths N and M respectively.
Print the count of characters from S1, which are also present in
S2. Duplicate characters in S1 should be counted only once, and
small and capital cases should be considered different.
I/P Format Three lines of input. First line has space separated values of N
and M.

*/


#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string S1, S2;
    cin >> S1 >> S2;

    set<char> s1, s2;

    for(char ch : S1)
        s1.insert(ch);   // unique chars of S1

    for(char ch : S2)
        s2.insert(ch);

    int cnt = 0;

    for(char ch : s1) {
        if(s2.count(ch))   // uses count() function
            cnt++;
    }

    cout << cnt;

    return 0;
}


/*
You are given two arrays having M and N integers respectively.
Let P be the number of elements in the first array but not in the
second array. Let Q be the number of elements in the second
array but not in the first array. Print the value of P * Q.
I/P Format The first line contains space separated values of M and N. The
next two lines contain M and N space separated integers.
*/




#include <iostream>
#include <set>
using namespace std;

int main() {
    int M, N, x;
    cin >> M >> N;

    set<int> s1, s2;

    for(int i = 0; i < M; i++) {
        cin >> x;
        s1.insert(x);
    }

    for(int i = 0; i < N; i++) {
        cin >> x;
        s2.insert(x);
    }

    int P = 0, Q = 0;

    for(auto i : s1)
        if(!s2.count(i)) P++;

    for(auto i : s2)
        if(!s1.count(i)) Q++;

    cout << P * Q;
}