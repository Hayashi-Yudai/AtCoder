#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;

  ll result = 0;
  unordered_map<string, int> m;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    result += m[s];
    m[s]++;
  }

  cout << result << endl;
}