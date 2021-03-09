#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int N, X;
  cin >> N >> X;

  int count = 1;
  int D = 0;
  for (int i = 0; i < N; i++)
  {
    int L;
    cin >> L;

    if (D + L <= X)
    {
      count++;
      D += L;
    }
    else
    {
      break;
    }
  }

  cout << count << endl;
}