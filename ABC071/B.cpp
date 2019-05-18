#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  string alpha = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < alpha.length(); i++)
  {
    if (s.find(alpha[i]) == string::npos)
    {
      cout << alpha[i] << endl;
      return 0;
    }
  }

  cout << "None" << endl;
}