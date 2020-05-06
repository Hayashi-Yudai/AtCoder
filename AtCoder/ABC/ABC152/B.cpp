#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int a, b; cin >> a >> b;

  ll ans = 0;
  if (a < b) {
    for (int i = 0; i < b; i++) {
      ans += pow(10, i) * a;
    }
  } else {
    for (int i = 0; i < a; i++) {
      ans += pow(10, i) * b;
    }
  }

  cout << ans << endl;
}