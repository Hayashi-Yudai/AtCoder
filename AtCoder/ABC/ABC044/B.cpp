#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  string w;
  cin >> w;

  map<char, int> m;
  for (int i = 0; i < w.length(); i++)
  {
    m[w[i]]++;
  }

  for (auto ele : m)
  {
    if (ele.second % 2 == 1)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}