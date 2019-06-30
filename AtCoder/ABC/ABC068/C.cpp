#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n, m;
  cin >> n >> m;

  map<int, vector<int>> l;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;

    if (l.find(a) == l.end())
    {
      vector<int> tmp = {b};
      l[a] = tmp;
    }
    else
    {
      l[a].push_back(b);
    }
  }

  bool success = false;
  for (int island : l[1])
  {
    if (find(l[island].begin(), l[island].end(), n) != l[island].end())
    {
      success = true;
      break;
    }
  }

  if (success)
  {
    cout << "POSSIBLE" << endl;
  }
  else
  {
    cout << "IMPOSSIBLE" << endl;
  }
}