#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n; cin >> n;
  map<int, int> m;

  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if (m[a] > 0) {
      cout << "NO" << endl;
      return 0;
    }

    m[a]++;
  }

  cout << "YES" << endl;
}