#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int INF = 1000000007;

ll dp[2005][2005];
void compute()
{
  for (int i = 0; i < 2005; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (j == 0 || i == j)
      {
        dp[i][j] = 1;
      }
      else
      {
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % INF;
      }
    }
  }
}

int main()
{
  int n, k;
  cin >> n >> k;

  compute();
  for (int i = 1; i <= k; i++)
  {
    cout << (dp[n - k + 1][i] * dp[k - 1][i - 1]) % INF << endl;
  }
}