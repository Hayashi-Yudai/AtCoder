#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n, m;
  cin >> n >> m;

  map<int, int> l;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    l[a] = b;
  }

  if (l[l[1]] == n)
  {
    cout << "POSSIBLE" << endl;
  }
  else
  {
    cout << "IMPOSSIBLE" << endl;
  }
}