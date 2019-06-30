#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;

  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (m.find(a) == m.end())
    {
      m[a] = 1;
    }
    else
    {
      m[a]++;
    }
  }

  int res = 0;
  for (auto it = m.begin(); it != m.end(); it++)
  {
    if (it->first <= it->second)
    {
      res += it->second - it->first;
    }
    else
    {
      res += it->second;
    }
  }

  cout << res << endl;
}