#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll x, y;
  cin >> x >> y;

  ll cnt = 0;
  while (x <= y)
  {
    cnt++;
    x *= 2;
  }

  cout << cnt << endl;
}