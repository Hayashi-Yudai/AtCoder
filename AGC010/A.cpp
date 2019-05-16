#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int count_odd = 0;
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (a % 2 == 1)
    {
      count_odd++;
    }
  }

  if (count_odd % 2 == 1)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
}