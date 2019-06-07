#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  vector<int> v = {a, b, c, d};
  sort(v.begin(), v.end());
  cout << (v[0] + v[1] - v[2]) / 2 << " " << (v[1] + v[2] - v[0]) / 2 << " " << (v[2] + v[0] - v[1]) / 2 << endl;
}