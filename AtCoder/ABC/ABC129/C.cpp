#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<bool> oks(n + 1, true);
  for (int i = 0; i < m; i++)
  {
    int a;
    cin >> a;
    oks[a] = false;
  }

  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  if (oks[1])
  {
    dp[1] = 1;
  }
  else
  {
    dp[1] = 0;
  }

  for (int i = 2; i <= n; i++)
  {
    if (oks[i])
    {
      dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }
  }

  cout << dp[n] << endl;
}