#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
vector<vector<int>> vec(m);
vector<int> p(m);
int ans = 0;
int r[13];
void solve(int idx)
{
  if (idx == n)
  {
    for (int i = 0; i < m; i++)
    {
      int count = 0;
      for (int j = 0; j < vec[i].size(); j++)
      {
        if (r[vec[i][j]] == 1)
        {
          count++;
        }
      }
      if (count % 2 != p[i])
      {
        return;
      }
    }

    ans++;
    return;
  }

  r[idx] = 0;
  solve(idx + 1);
  r[idx] = 1;
  solve(idx + 1);
}

int main()
{
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int k;
    cin >> k;
    vec[i].resize(k);
    for (int j = 0; j < k; j++)
    {
      cin >> vec[i][j];
      vec[i][j]--;
    }
  }

  for (int i = 0; i < m; i++)
  {
    cin >> p[i];
  }

  solve(1);
  cout << ans << endl;
}