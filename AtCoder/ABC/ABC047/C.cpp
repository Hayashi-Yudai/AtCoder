#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  string s;
  cin >> s;

  char now = s[0];
  int res = 0;
  for (int i = 1; i < s.length(); i++)
  {
    if (now != s[i])
    {
      res++;
    }

    now = s[i];
  }

  cout << res << endl;
}