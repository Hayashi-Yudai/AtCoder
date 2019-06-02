#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll n;
  cin >> n;
  for (int h = 1; h <= 3500; h++)
  {
    for (int w = 1; w < 3500; w++)
    {
      ll x = 4 * h * w - n * (w + h);
      if (x > 0 && (n * h * w) % x == 0)
      {
        ll y = (n * h * w) / x;
        cout << h << " " << w << " " << y << endl;
        return 0;
      }
    }
  }
}
