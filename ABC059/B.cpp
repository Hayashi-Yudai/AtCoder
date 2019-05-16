#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  if (a.length() > b.length())
  {
    cout << "GREATER" << endl;
  }
  else if (a.length() < b.length())
  {
    cout << "LESS" << endl;
  }
  else
  {
    for (int i = 0; i < a.length(); i++)
    {
      if (a[i] - '0' > b[i] - '0')
      {
        cout << "GREATER" << endl;
        return 0;
      }
      else if (a[i] - '0' < b[i] - '0')
      {
        cout << "LESS" << endl;
        return 0;
      }
    }

    cout << "EQUAL" << endl;
  }
}