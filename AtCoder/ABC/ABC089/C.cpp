#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;

  ll name[5] = {0, 0, 0, 0, 0};
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    if (s[0] == 'M')
    {
      name[0]++;
    }
    else if (s[0] == 'A')
    {
      name[1]++;
    }
    else if (s[0] == 'R')
    {
      name[2]++;
    }
    else if (s[0] == 'C')
    {
      name[3]++;
    }
    else if (s[0] == 'H')
    {
      name[4]++;
    }
  }

  ll res = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = i + 1; j < 4; j++)
    {
      for (int k = j + 1; k < 5; k++)
      {
        res += name[i] * name[j] * name[k];
      }
    }
  }

  cout << res << endl;
}