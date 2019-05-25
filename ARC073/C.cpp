#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;

  int sentou[200005];
  for (int i = 0; i < n; i++)
  {
    cin >> sentou[i];
  }

  int res = 0;
  for (int i = 1; i < n; i++)
  {
    res += std::min(t, sentou[i] - sentou[i - 1]);
  }
  res += t;

  cout << res << endl;
}