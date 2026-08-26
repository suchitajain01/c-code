/*string consisting of alphabes,digits and special characters ,
tranform the string into another by converting all alphabets into small case letters,
leaving digits as it is, and moving the special characters at the end. print the tranformed string.*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
  int n; // no of characters in string
  cin >> n;

  string str1, str;
  cin >> str;

  for (int i = 0; i < n; i++)
  {
    if (str[i] >= 65 && str[i] <= 90)
    {
      str1 = str1 + char(str[i] + 32); //  In lowerCase Characters
    }
    else
    {
      str1 = str1 + str[i];
    }
  }

  cout << str1;
}
