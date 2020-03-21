#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int H, A;
    cin >> H >> A;

    if (H % A == 0){
        cout << H / A << endl;
    } else {
        cout << H / A + 1 << endl;
    }
}
