#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[2005];
int n, k;

ll split(int i, int m, int k)
{
  ll res = 0;
  if (i == 1)
  {
    if (k >= m)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  for (int j = m; j < k; j++)
  {
    res += split(i - 1, j, k - j);
    res = res % 1000000007;
  }

  return res;
}

int main()
{
  cin >> n >> k;
  for (int i = 0; i < 2005; i++)
  {
    dp[i] = 0;
  }
  dp[1] = 1;

  for (int i = 1; i <= k; i++)
  {
    ll red = split(i, 1, k);
    ll blue = split(i + 1, 0, n - k);
  }
}