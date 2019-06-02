#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAX_N = 100005;
int field[MAX_N];

int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < MAX_N; i++)
  {
    field[i] = 0;
  }

  int l, r;
  for (int i = 0; i < m; i++)
  {
    cin >> l >> r;
    l--;
    r--;
    field[l] += 1;
    field[r + 1] += -1;
  }

  for (int i = 1; i < MAX_N; i++)
  {
    field[i] += field[i - 1];
  }

  int res = 0;
  for (int i = 0; i < MAX_N; i++)
  {
    if (field[i] == m)
    {
      res++;
    }
  }

  cout << res << endl;
}