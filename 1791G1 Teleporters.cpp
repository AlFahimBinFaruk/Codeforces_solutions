// https://codeforces.com/contest/1791/problem/G1
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, c;
	cin >> n >> c;

	priority_queue<int> p;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		// sorted order(high -> low).
		p.push(-(num + i));
	}

	int ans = 0;
	while (!p.empty())
	{
		int cost = -p.top();
		p.pop();
		if (cost > c)
		{
			break;
		}

		c -= cost;
		ans++;
	}
	cout << ans << "\n";
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
