#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int l, r;
  cin >> l >> r;

  if (floor(l / 2019.0) < floor(r / 2019.0))
  {
    cout << 0 << endl;
    return 0;
  }

  l = l % 2019;
  r = r % 2019;

  int res = (l * (l + 1)) % 2019;
  for (int i = l; i <= r - 1; i++)
  {
    for (int j = l + 1; j <= r; j++)
    {
      if ((i * j) % 2019 < res)
      {
        res = (i * j) % 2019;
      }
    }
  }

  cout << res << endl;
}