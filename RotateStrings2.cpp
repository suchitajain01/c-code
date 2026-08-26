#include <iostream>
using namespace std;

int main()
{
/*
Rotate the given string S of length N by K places towards
right. Given that K <= N.
*/
int K,N;
string str;

cin>>N>>K;
cin>>str;

string str1 = str.substr(K-N,K);
string str2 = str.substr(0,K-N);

string result = (str1).append(str2);

cout<<result;

return 0;
 


}
