#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll F(ll a, ll b)
{
  return std::max(floor(log10(a)), floor(log10(b))) + 1;
}

int main()
{
  ll n;
  cin >> n;

  ll res = 100;
  // √nまでで試せば十分
  for (ll i = 1LL; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      res = std::min(res, F(i, n / i));
    }
  }

  cout << res << endl;
}