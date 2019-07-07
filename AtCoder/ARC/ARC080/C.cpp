#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;

  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a % 4 == 0)
    {
      m[4]++;
    }
    else if (a % 2 == 0)
    {
      m[2] = 1;
    }
    else
    {
      m[0]++;
    }
  }

  if (m[2] + m[0] <= m[4] + 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}