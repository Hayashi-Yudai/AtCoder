#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b)
{
  ll m = std::min(a, b);
  ll M = std::max(a, b);

  if (m == 0)
  {
    return M;
  }
  else
  {
    return gcd(m, M % m);
  }
}

int main()
{
  int n;
  ll t;
  ll res = 1;

  cin >> n;
  // 最小公倍数が求める答え
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    ll g = gcd(res, t);
    res = res / g * t;
  }

  cout << res << endl;
}