#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(int n)
{
  ll res = 1;
  for (int i = n; i > 0; i--)
  {
    res *= i;
    res %= 1000000007;
  }

  return res;
}

int main()
{
  int n, m;
  cin >> n >> m;

  if (abs(n - m) > 1)
  {
    cout << 0 << endl;
    return 0;
  }

  if (n != m)
  {
    cout << (solve(n) * solve(m)) % 1000000007 << endl;
  }
  else
  {
    cout << (solve(n) * solve(m) * 2) % 1000000007 << endl;
  }
}