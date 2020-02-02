#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int p, q, r;
  cin >> p >> q >> r;

  int res = min(p + q, q + r);
  res = min(res, p + r);

  cout << res << endl;
}