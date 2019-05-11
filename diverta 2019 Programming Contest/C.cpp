#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  int n;
  cin >> n;

  vector<string> s;
  string a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    s.push_back(a);
  }

  int count_a = 0;
  int count_b = 0;
  int only_a = 0;
  int only_b = 0;
  int both = 0;
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < s[i].length(); j++)
    {
      if (j == 0 && s[i][j] == 'B')
      {
        count_b++;
      }
      else if (j == s[i].length() - 1 && s[i][j] == 'A')
      {
        count_a++;
      }

      if (j < s[i].length() && s[i][j] == 'A' && s[i][j + 1] == 'B')
      {
        res++;
      }
    }

    if (s[i][0] == 'B' && s[i][s[i].length() - 1] == 'A')
    {
      both++;
    }
    else if (s[i][0] == 'B')
    {
      only_b++;
    }
    else if (s[i][s[i].length() - 1] == 'A')
    {
      only_a++;
    }
  }

  if (n > 1)
  {
    res += std::min(count_a, count_b);
  }
  if (only_a == 0 && only_b == 0 && both != 0)
  {
    res--;
  }

  cout << res << endl;
}
