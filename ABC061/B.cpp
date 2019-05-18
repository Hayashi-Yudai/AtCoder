#include <bits/stdc++.h>
using namespace std;

int main()
{
  int roads[50][50];
  for (int i = 0; i < 50; i++)
  {
    for (int j = 0; j < 50; j++)
    {
      roads[i][j] = 0;
    }
  }

  int n, m;
  cin >> n >> m;

  int a, b;
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b;
    a--;
    b--;
    roads[a][b] = roads[b][a] += 1;
  }

  for (int i = 0; i < n; i++)
  {
    int res = 0;
    for (int j = 0; j < n; j++)
    {
      res += roads[i][j];
    }
    cout << res << endl;
  }
}