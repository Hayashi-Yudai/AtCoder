#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }

  int res = 0;
  for (int i = 0; i < n - 2; i++)
  {
    if ((v[i] < v[i + 1] && v[i + 1] < v[i + 2]) || (v[i + 2] < v[i + 1] && v[i + 1] < v[i]))
    {
      res++;
    }
  }

  cout << res << endl;
}