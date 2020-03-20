#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;

ll modpow(ll n, ll k) {
    if (k == 0) return 1;
    if (k == 1) return n;

    if (k % 2 == 0) {
        ll root = modpow(n, k / 2);
        return root * root % mod;
    } else {
        return n * modpow(n, k - 1) % mod;
    }
}

ll comb(ll n, ll k) {
    ll mul = 1;
    ll div = 1;

    for (ll i = 0; i < k; i++) {
        mul *= n - i;
        mul %= mod;

        div *= i + 1;
        div %= mod;
    }

    ll ans = mul * modpow(div, mod - 2) % mod;
    return ans;
}

int main() {
    ll n, a, b; cin >> n >> a >> b;

    ll ans = modpow(2, n) - 1;
    ans -= comb(n, a);
    if (ans < 0) ans += mod;
    ans -= comb(n, b);

    if (ans < 0) ans += mod;

    cout << ans << endl;
}
