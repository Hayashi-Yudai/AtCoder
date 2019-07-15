#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	cin >> s;

	int i = 2;
	while (i <= s.length())
	{
		string sub_s = s.substr(0, s.length() - i);
		int half = sub_s.length() / 2;
		if (sub_s.substr(0, half) == sub_s.substr(half, half))
		{
			cout << s.length() - i << endl;
			return 0;
		}

		i += 2;
	}
}