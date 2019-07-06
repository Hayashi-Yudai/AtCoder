#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int m, n;
  cin >> n;

  map<string, int> s;
  for (int i = 0; i < n; i++)
  {
    string a;
    cin >> a;
    s[a]++;
  }

  cin >> m;
  for (int i = 0; i < m; i++)
  {
    string b;
    cin >> b;
    s[b]--;
  }

  int res = 0;
  for (auto e : s)
  {
    res = max(res, e.second);
  }

  cout << res << endl;
}