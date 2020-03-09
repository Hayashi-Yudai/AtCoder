#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int bingo[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      int a;
      cin >> a;
      bingo[i][j] = a;
    }
  }

  int n;
  cin >> n;
  map<int, int> column;
  map<int, int> row;

  int sp1 = 0, sp2 = 0;

  for (int i = 0; i < n; i++)
  {
    int b;
    cin >> b;

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (bingo[i][j] == b)
        {
          column[i]++;
          row[j]++;

          if (i == j)
            sp1++;
          if (i == 2 - j)
            sp2++;
        }
      }
    }
  }

  if (column[0] == 3 || column[1] == 3 || column[2] == 3)
  {
    cout << "Yes" << endl;
  }
  else if (row[0] == 3 || row[1] == 3 || row[2] == 3)
  {
    cout << "Yes" << endl;
  }
  else if (sp1 == 3 || sp2 == 3)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
