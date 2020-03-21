#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;

vector<int> min_damage(30000, INF);

int main() {
    int h, n; cin >> h >> n;
    vector<int> a, b;

    for (int i = 0; i < n; i++) {
        int c, d; cin >> c >> d;
        a.push_back(c);
        b.push_back(d);
    }

    min_damage[0] = 0;
    for (int i = 0; i <= h; i++) {
        for (int j = 0; j < n; j++) {
            int pos = i + a[j];
            min_damage[pos] = min(min_damage[pos], min_damage[i] + b[j]);
        }
    }

    int ans = INF;
    for (int i = h; i < 30000; i++) {
        ans = min(ans, min_damage[i]);
    }

    cout << ans << endl;
}
