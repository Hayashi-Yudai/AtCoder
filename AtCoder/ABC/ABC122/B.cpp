#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  string s;
  cin >> s;

  int ans = 0;
  int count = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
    {
      count++;
    }
    else
    {
      ans = max(count, ans);
      count = 0;
    }
  }

  ans = max(count, ans);

  cout << ans << endl;
}