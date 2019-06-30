#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    int d;
    cin >> d;
    v.push_back(d);
  }

  sort(v.begin(), v.end());
  int lower = v[floor((n - 1) / 2.0)];
  int upper = v[ceil((n - 1) / 2.0)];

  if (upper == lower)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << upper - lower << endl;
  }
}