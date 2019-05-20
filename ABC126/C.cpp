#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
  ll n, k;
  cin >> n >> k;

  double res = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i < k)
    {
      res += pow(0.5, ceil(log2((double)k / i)));
    }
    else
    {
      res++;
    }
  }

  cout << std::fixed << std::setprecision(11) << res / n << endl;
}