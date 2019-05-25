#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> v;
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());

  int b, c;
  vector<vector<int>> sousa;
  for (int i = 0; i < m; i++)
  {
    cin >> b >> c;
    vector<int> temp = {b, c};
    sousa.push_back(temp);
  }
  sort(sousa.begin(), sousa.end(), [](auto &x, auto &y) { return x[1] > y[1]; });

  vector<int>::iterator it = v.end();
  vector<int>::iterator be = v.begin();
  for (int i = 0; i < m; i++)
  {
    it = lower_bound(be, it, sousa[i][1]);
    if (it != be)
    {
      int count = 0;
      for (auto t = be; t != it; t++)
      {
        if (count < sousa[i][0])
        {
          *t = sousa[i][1];
          count++;
          be++;
        }
        else
        {
          break;
        }
      }
    }
    else
    {
      break;
    }
  }

  ll res = 0;
  for (int i = 0; i < n; i++)
  {
    res += v[i];
  }

  cout << res << endl;
}