#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int h, w;
  cin >> h >> w;

  vector<string> v;
  for (int i = 0; i < h; i++)
  {
    string s;
    cin >> s;

    v.push_back(s);
    v.push_back(s);
  }

  for (int i = 0; i < 2 * h; i++)
  {
    cout << v[i] << endl;
  }
}