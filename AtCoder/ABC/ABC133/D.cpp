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

  ll base = 0;
  for (int i = 0; i < n; i++)
  {
    base += v[i] * pow(-1, i);
  }

  cout << base << " ";
  for (int i = 1; i < n; i++)
  {
    base *= -1;
    base += v[i - 1] * 2;

    cout << base << " ";
  }

  cout << "\n";
}