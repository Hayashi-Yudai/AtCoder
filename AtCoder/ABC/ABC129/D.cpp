#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int h, w;
  cin >> h >> w;

  vector<vector<char>> field;
  for (int i = 0; i < h; i++)
  {
    string s;
    cin >> s;
    vector<char> chs;
    for (char ch : s)
    {
      chs.push_back(ch);
    }

    field.push_back(chs);
  }

  vector<vector<int>> L(h, vector<int>(w, 0));
  vector<vector<int>> R(h, vector<int>(w, 0));
  vector<vector<int>> U(h, vector<int>(w, 0));
  vector<vector<int>> D(h, vector<int>(w, 0));

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (field[i][j] == '#')
      {
        continue;
      }

      if (j == 0)
      {
        L[i][j] = 1;
      }
      else
      {
        L[i][j] = L[i][j - 1] + 1;
      }
    }
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = w - 1; j >= 0; j--)
    {
      if (field[i][j] == '#')
      {
        continue;
      }

      if (j == w - 1)
      {
        R[i][j] = 1;
      }
      else
      {
        R[i][j] = R[i][j + 1] + 1;
      }
    }
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (field[i][j] == '#')
      {
        continue;
      }

      if (i == 0)
      {
        U[i][j] = 1;
      }
      else
      {
        U[i][j] = U[i - 1][j] + 1;
      }
    }
  }

  for (int i = h - 1; i >= 0; i--)
  {
    for (int j = 0; j < w; j++)
    {
      if (field[i][j] == '#')
      {
        continue;
      }

      if (i == h - 1)
      {
        D[i][j] = 1;
      }
      else
      {
        D[i][j] = D[i + 1][j] + 1;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      ans = max(L[i][j] + R[i][j] + U[i][j] + D[i][j], ans);
    }
  }

  cout << ans - 3 << endl;
}