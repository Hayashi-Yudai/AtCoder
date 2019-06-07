#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
vector<vector<int>> v;
vector<int> p;

bool judge(vector<int> det)
{
  for (int i = 0; i < m; i++)
  {
    int cnt = 0;
    for (int j = 0; j < v[i].size(); j++)
    {
      if (det[v[i][j] - 1])
      {
        cnt++;
      }
    }

    if (cnt % 2 != p[i])
    {
      return false;
    }
  }

  return true;
}

int solve(vector<int> det, int point)
{
  if (det.size() == n)
  {
    if (judge(det))
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    det.push_back(0);
    point += solve(det, point);
    det.pop_back();

    det.push_back(1);
    point += solve(det, point);
    det.pop_back();

    return point;
  }
}

int main()
{
  cin >> n >> m;

  int k;
  for (int i = 0; i < m; i++)
  {
    cin >> k;
    vector<int> s;
    for (int j = 0; j < k; j++)
    {
      int a;
      cin >> a;
      s.push_back(a);
    }
    v.push_back(s);
  }

  for (int i = 0; i < m; i++)
  {
    int b;
    cin >> b;
    p.push_back(b);
  }

  vector<int> det;
  cout << solve(det, 0) << endl;
}