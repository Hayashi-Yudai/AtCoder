#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
  int n, y;
  cin >> n >> y;

  int one = y / 1000;
  int five = 0;
  int ten = 0;

  int total = one + five + ten;
  int dif = total - n;
  while (dif > 0)
  {
    if (dif >= 4 && one >= 5)
    {
      one -= 5;
      five += 1;
      dif -= 4;
    }
    else if (five >= 2)
    {
      five -= 2;
      ten += 1;
      dif -= 1;
    }
    else
    {
      break;
    }
  }

  if (dif == 0)
  {
    cout << ten << " " << five << " " << one << endl;
  }
  else
  {
    cout << "-1 -1 -1" << endl;
  }
}
