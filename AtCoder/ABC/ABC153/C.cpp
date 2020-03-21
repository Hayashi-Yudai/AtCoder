#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> H;
    for (int i = 0; i < N; i++) {
        int h;
        cin >> h;
        H.push_back(h);
    }

    sort(H.begin(), H.end(), greater<int>());

    ll ans = 0;
    for (int i = K; i < N; i++) {
        ans += H[i];
    }

    cout << ans << endl;
}
