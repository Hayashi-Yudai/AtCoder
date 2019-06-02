#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
ll solve(int times, ll value, deque<int> dq, deque<int> having)
{
  if (times == k)
  {
    return value;
  }

  sort(having.begin(), having.end());
  ll tmp1_1 = 0;
  if (dq.size != 0)
  {
    deque<int> dq2 = dq;
    deque<int> having2 = having;
    dq2.pop_front();
    having2.push_back(dq.front());
    ll tmp1 = solve(times + 1, value + dq.front(), dq2, having2);

    dq2 = dq;
    having2 = having;
    dq2.pop_back();
    having2.push_back(dq.back());
    ll tmp2 = solve(times + 1, value + dq.back(), dq2, having2);

    tmp1_1 = std::max(tmp1, tmp2);
  }

  deque<int> dq2 = dq;
  deque<int> having2 = having;
  having2.pop_front();
  dq2.push_back(having.front());
  ll tmp3 = solve(times + 1, value - having[0], dq2, having2);

  deque<int> dq2 = dq;
  deque<int> having2 = having;
  having2.pop_front();
  dq2.push_front(having.front());
  ll tmp4 = solve(times + 1, value - having[0], dq2, having2);

  ll tmp2_1 = std::max(tmp3, tmp4);

  return std::max(tmp1_1, tmp2_1);
}

int main()
{
  cin >> n >> k;

  deque<int> value;
  deque<int> has;
  for (int i = 0; i < n; i++)
  {
    int v;
    cin >> v;
    value.push_back(v);
  }

  cout << solve(0, 0, value, has) << endl;
}