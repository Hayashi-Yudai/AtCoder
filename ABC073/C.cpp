#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<int, int> m;

  int a;
  // 各数字が何回出てきたか数える
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (m.find(a) != m.end())
    {
      m[a]++;
    }
    else
    {
      m[a] = 1;
    }
  }

  int res = 0;
  // 偶数回出ていれば最終的には消える
  for (auto it = m.begin(); it != m.end(); it++)
  {
    if (it->second % 2 == 1)
    {
      res++;
    }
  }

  cout << res << endl;
}