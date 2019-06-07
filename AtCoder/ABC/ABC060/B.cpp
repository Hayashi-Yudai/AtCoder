#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int res = a % b;
  for (int i = 0; i < b; i++)
  {
    if (res * (i + 1) % b == c)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}