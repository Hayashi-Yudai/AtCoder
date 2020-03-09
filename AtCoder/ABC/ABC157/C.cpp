#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> target(n, -1);
  for (int i = 0; i < m; i++)
  {
    int s, c;
    cin >> s >> c;
    s--;

    if (target[s] == -1)
    {
      target[s] = c;
    }
    else if (target[s] != c)
    {
      cout << -1 << endl;
      return 0;
    }
  }

  if (target[0] == 0)
  {
    if (n > 1)
    {
      cout << -1 << endl;
      return 0;
    }
    else
    {
      cout << 0 << endl;
      return 0;
    }
  }
  else if (target[0] == -1)
  {
    if (n > 1)
    {
      target[0] = 1;
    }
    else
    {
      target[0] = 0;
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (target[i] != -1)
    {
      ans += target[i] * pow(10, n - i - 1);
    }
  }

  cout << ans << endl;
}
