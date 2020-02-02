#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;

  vector<int> nums;
  int sum = 0;
  int w;
  for (int i = 0; i < n; i++)
  {
    cin >> w;
    nums.push_back(w);
    sum += w;
  }

  int sub1 = 0;
  int sub2 = sum;
  int res = sum;

  for (int i = 0; i < n; i++)
  {
    sub1 += nums[i];
    sub2 -= nums[i];

    res = min(res, abs(sub1 - sub2));
  }

  cout << res << endl;
}