#include <bits/stdc++.h>
using namespace std;

struct city
{
  int pref;
  int year;
};

int main()
{
  int n, m;
  cin >> n >> m;

  vector<city> v;
  for (int i = 0; i < m; i++)
  {
    int p, y;
    cin >> p >> y;
    city c = {p, y};
    v.push_back(c);
  }

  map<int, vector<int>> table;
  for (int i = 0; i < m; i++)
  {
    if (table.count(v[i].pref))
    {
      table[v[i].pref].push_back(v[i].year);
    }
    else
    {
      vector<int> tmp = {v[i].year};
      table[v[i].pref] = tmp;
    }
  }

  for (auto it = table.begin(); it != table.end(); it++)
  {
    sort((it->second).begin(), (it->second).end());
  }

  for (int i = 0; i < m; i++)
  {
    auto it = lower_bound(table[v[i].pref].begin(), table[v[i].pref].end(), v[i].year);
    int index = distance(table[v[i].pref].begin(), it);

    cout << setfill('0') << right << setw(6) << v[i].pref;
    cout << setfill('0') << right << setw(6) << index + 1 << endl;
  }
}