#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  int n;
  cin >> n;

  list<ll> ans;
  int a;
  cin >> a;
  ans.push_back(a);
  if (n % 2 == 0)
  {
    for (int i = 1; i < n; i++)
    {
      cin >> a;
      if (i % 2 == 0)
      {
        ans.push_back(a);
      }
      else
      {
        ans.push_front(a);
      }
    }
  }
  else
  {
    for (int i = 1; i < n; i++)
    {
      cin >> a;
      if (i % 2 == 1)
      {
        ans.push_back(a);
      }
      else
      {
        ans.push_front(a);
      }
    }
  }

  for (auto itr = ans.begin(); itr != ans.end(); itr++)
  {
    cout << *itr;
    if (itr != ans.end()--)
    {
      cout << " ";
    }
  }
  cout << "\n";
}