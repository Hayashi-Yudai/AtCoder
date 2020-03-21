#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
   ll H; cin >> H;

   int step = ceil(log2(H));
   ll ans;
   if (ceil(log2(H)) == log2(H)){
       ans = pow(2, step + 1) - 1;
   } else {
       ans = pow(2, step) - 1;
   }

   cout << ans << endl;
}
