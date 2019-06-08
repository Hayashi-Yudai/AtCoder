#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n, k;
  cin >> n >> k;

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

  vector<int> v;
  for (auto iter = m.begin(); iter != m.end(); iter++)
  {
    v.push_back(iter->second);
  }
  sort(v.begin(), v.end());

  int res = 0;
  if (v.size() > k)
  {
    for (int i = 0; i < v.size() - k; i++)
    {
      res += v[i];
    }
  }

  cout << res << endl;
}