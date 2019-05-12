#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  string s;
  cin >> s;

  vector<char> c;
  for (int i = 0; i < 5; i++)
  {
    c.push_back(s[i]);
  }

  sort(c.begin(), c.end());
  string corr = "ahooy";
  for (int i = 0; i < 5; i++)
  {
    if (c[i] != corr[i])
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}
