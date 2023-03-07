// https://codeforces.com/contest/1799/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;

	vector<int> arr(n+m);
	set<int> s;

	int lastIn = n;
	for (int i = 1; i <= m; i++)
	{
		int b;
		cin >> b;

		if (b <= n)
		{
			continue;
		}
		if (lastIn <= 0)
		{
			continue;
		}

		if (s.find(b) == s.end())
		{
			// not found.
			// last index will be removed.
			arr[lastIn] = i;
			lastIn--;
			s.insert(b);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << (arr[i] ? arr[i] : -1) << " ";
	}
	cout << "\n";
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
