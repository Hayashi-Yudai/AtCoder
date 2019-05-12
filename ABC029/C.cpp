#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int n;
  cin >> n;

  string ans = "";
  for (int i = 0; i < n; i++)
  {
    ans += 'a';
  }

  for (int i = 0; i < pow(3, n); i++)
  {
    cout << ans << endl;
    if (i < pow(3, n) - 1)
    {
      int k = 1;
      while (true)
      {
        if (ans[n - k] == 'a')
        {
          ans[n - k] = 'b';
          break;
        }
        else if (ans[n - k] == 'b')
        {
          ans[n - k] = 'c';
          break;
        }
        else
        {
          ans[n - k] = 'a';
          k++;
        }
      }
    }
  }
}
