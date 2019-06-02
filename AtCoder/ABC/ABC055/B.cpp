#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  int n;
  ll power = 1;

  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    power *= i;
    power %= 1000000007;
  }

  cout << power << endl;
}