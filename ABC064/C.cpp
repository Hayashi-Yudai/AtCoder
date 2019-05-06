#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // 各色の人の人数を集計する
  int dist[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

  int score;
  for (int i = 0; i < n; i++)
  {
    cin >> score;
    int rank = floor(score / 400.0);
    // レートが3200以上の人は一番右の要素でカウント
    if (rank >= 8)
    {
      dist[8]++;
    }
    else
    {
      dist[rank]++;
    }
  }

  int res = 0;
  // 赤以下で、人がいる色が何色あるか数える
  for (int i = 0; i < 8; i++)
  {
    if (dist[i])
    {
      res++;
    }
  }

  // 全員3200以上だった場合のための場合分け
  if (res != 0)
  {
    cout << res << " " << res + dist[8] << endl;
  }
  else
  {
    cout << 1 << " " << dist[8] << endl;
  }
}