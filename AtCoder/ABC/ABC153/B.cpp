#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int H, N;
    cin >> H >> N;

    int power = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        power += a;
    }

    if (power >= H){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}
