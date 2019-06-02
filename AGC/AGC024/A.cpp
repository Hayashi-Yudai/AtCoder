#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll a, b, c, k;
  cin >> a >> b >> c >> k;

  if (k % 2 == 0)
  {
    if (abs(a - b) > pow(10, 18))
    {
      cout << "Unfair" << endl;
    }
    else
    {
      cout << a - b << endl;
    }
  }
  else
  {
    if (abs(a - b) > pow(10, 18))
    {
      cout << "Unfair" << endl;
    }
    else
    {
      cout << b - a << endl;
    }
  }
}