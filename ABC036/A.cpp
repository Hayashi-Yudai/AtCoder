#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int res = 0;
  while (true)
  {
    if (a * res >= b)
    {
      cout << res << endl;
      return 0;
    }
    else
    {
      res++;
    }
  }
}
