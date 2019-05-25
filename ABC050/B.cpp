#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int times[105];

  int total = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> times[i];
    total += times[i];
  }

  int m;
  cin >> m;
  int ans[105];
  for (int i = 0; i < m; i++)
  {
    int p, x;
    cin >> p >> x;
    p--;

    ans[i] = total - (times[p] - x);
  }

  for (int i = 0; i < m; i++)
  {
    cout << ans[i] << endl;
  }
}