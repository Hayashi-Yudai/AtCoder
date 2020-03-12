#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ll n, a, b; cin >> n >> a >> b;

  ll res = n / (a + b) * a;
  ll red = n % (a + b);

  res += min(a, red);

  cout << res << endl;
}