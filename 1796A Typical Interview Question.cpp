// https://codeforces.com/contest/1796/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	string s;
	cin >> n >> s;

	string rr = "";
	int cur = 1;
	while (rr.size() < 100)
	{
		if (cur % 3 == 0)
		{
			rr += 'F';
		}

		if (cur % 5 == 0)
		{
			rr += 'B';
		}
		cur++;
	}

	bool found = (rr.find(s) != string::npos);
	cout << (found ? "YES" : "NO") << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
