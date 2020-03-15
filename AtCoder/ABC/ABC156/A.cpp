#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n, r; cin >> n >> r;
  int ans = n >= 10 ? r : r + (10 - n) * 100;

  cout << ans << endl;
}