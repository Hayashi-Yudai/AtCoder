#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;
  vector<string> ans;

  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;

    string s;
    cin >> s;
    if (k == 11)
    {
      if (s[0] == '8')
      {
        ans.push_back("YES");
      }
      else
      {
        ans.push_back("NO");
      }
    }
    else if (k < 11)
    {
      ans.push_back("NO");
    }
    else if (find(s.begin(), s.begin() + k - 12, '8') == s.end())
    {
      ans.push_back("NO");
    }
    else
    {
      ans.push_back("YES");
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << endl;
  }
}