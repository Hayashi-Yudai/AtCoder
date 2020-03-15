#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> par;
  vector<int> rank;

  UnionFind(int N) : par(N), rank(N, 0) {
    for (int i = 0; i < N; i++) par[i] = i;
  }

  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);

    if (rx == ry) return;
    par[rx] = ry;
    rank[ry] = rank[ry] + rank[rx] + 1;
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }
};

int main() {
  int n, m, k; cin >> n >> m >> k;
  UnionFind UF(n + 1);

  vector<vector<int>> connect(n + 1, vector<int>(0));
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    if (b > a) swap(a, b);
    UF.unite(a, b);
    connect[a].emplace_back(b);
    connect[b].emplace_back(a);
  }

  vector<vector<int>> not_connect(n + 1, vector<int>(0));
  for (int i = 0; i < k; i++) {
    int c, d; cin >> c >> d;
    not_connect[c].emplace_back(d);
    not_connect[d].emplace_back(c);
  }

  vector<int> count(n + 1, 0);
  for (int i = 1; i < n + 1; i++) {
    int ans = UF.rank[UF.root(i)] - connect[i].size();
    for (auto &item : not_connect[i]) {
      if (UF.same(item, i)) ans--;
    }
    cout << ans << " ";
  }

  cout << endl;
}