#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int first_idx = -1;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'C')
    {
      first_idx = i;
      break;
    }
  }
  if (first_idx == -1)
  {
    cout << "No" << endl;
    return 0;
  }

  for (int i = first_idx; i < s.length(); i++)
  {
    if (s[i] == 'F')
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}