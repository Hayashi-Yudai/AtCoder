#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n; cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    v.push_back(a);
  }

  int now = 0;
  int mse = 1e+9;

  while (now <= 100) {
    int tmp_error = 0;
    for (int i = 0; i < n; i++) {
      tmp_error += pow(now - v[i], 2);
    }

    if (tmp_error < mse) {
      mse = tmp_error;
    }

    now++;
  }

  cout << mse << endl;
}