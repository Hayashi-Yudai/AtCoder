#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n; cin >> n;
  int ans = 0;

  int tmp_min = 1e9;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;

    if (tmp_min >= a) {
      ans++;
      tmp_min = a;
    }
  }

  cout << ans << endl;
}