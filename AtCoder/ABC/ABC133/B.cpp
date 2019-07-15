#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n, d;
  cin >> n >> d;

  vector<vector<int>> v;
  for (int i = 0; i < n; i++)
  {
    vector<int> tmp;
    for (int j = 0; j < d; j++)
    {
      int x;
      cin >> x;

      tmp.push_back(x);
    }

    v.push_back(tmp);
  }

  int res = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      float dist = 0;
      for (int k = 0; k < d; k++)
      {
        dist += pow(v[i][k] - v[j][k], 2);
      }

      dist = sqrt(dist);
      if (dist == int(dist))
      {
        res++;
      }
    }
  }

  cout << res << endl;
}