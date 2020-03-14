#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s; cin >> s;
  int q; cin >> q;
  bool rev = false;

  for (int i = 0; i < q; i++) {
    int t, f;
    string c;

    cin >> t;

    if (t == 1) {
      rev = !rev;
    } else {
      cin >> f >> c;

      if ((f == 1 && rev) || (f == 2 && !rev)) {
        s.append(c);
      } else if ((f == 1 && !rev) || (f == 2 && rev)) {
        s.insert(0, c);
      }
    }
  }

  if (rev) reverse(s.begin(), s.end());

  cout << s << endl;
}