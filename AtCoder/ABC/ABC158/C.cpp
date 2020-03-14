#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int a, b; cin >> a >> b;

  float a_min, a_max, b_min, b_max;
  a_min = a / 0.08;
  a_max = (a + 1) / 0.08;
  b_min = b / 0.1;
  b_max = (b + 1) / 0.1;

  if (a_min <= b_min && b_min <= a_max && ceil(b_min) < a_max) {
    cout << ceil(b_min) << endl;
  } else if (b_min <= a_min && a_min <= b_max && ceil(a_min) < b_max) {
    cout << ceil(a_min) << endl;
  }else {
    cout << -1 << endl;
  }
}