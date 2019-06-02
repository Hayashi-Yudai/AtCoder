#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  pair<pair<string, int>, int> p[110];

  for (int i = 0; i < n; i++)
  {
    string s;
    int score;
    cin >> s >> score;
    p[i] = make_pair(make_pair(s, -score), i + 1);
  }

  sort(p, p + n);
  for (int i = 0; i < n; i++)
  {
    cout << p[i].second << endl;
  }
}