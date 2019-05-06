/*
https://atcoder.jp/contests/abc061/tasks/abc061_c
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// 数字と何回挿入するかを構造体として持っておく
struct ab
{
  ll a;
  ll b;
};

int main()
{
  ll n, k;
  ll a, b;
  cin >> n >> k;

  vector<ab> v;

  for (ll i = 0; i < n; i++)
  {
    cin >> a >> b;
    ab tmp = {a, b};
    v.push_back(tmp);
  }

  // 数字でvectorをソート
  sort(v.begin(), v.end(), [](const ab &tmp1, const ab &tmp2) { return tmp1.a < tmp2.a; });
  ll count = 0; // 何個の数字を見たか
  ll i = 0;
  while (count < k)
  {
    count += v[i].b;
    i++;
  }

  cout << v[i - 1].a << endl;
}
