// https://codeforces.com/contest/1799/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	set<pair<long long, long long>> ss;
	for (int i = 1; i <= n; i++)
	{
		long long num;
		cin >> num;

		ss.insert({num, i});
	}

	vector<pair<long long, long long>> op;
	while (!ss.empty())
	{
		auto fi = *ss.begin();
		auto la = *ss.rbegin();

		if (fi.first == la.first)
		{
			break;
		}

		if (fi.first == 1)
		{
			cout << -1 << "\n";
			return;
		}

		// take max,min
		// v = max/min
		// max = v
		op.push_back({la.second, fi.second});
		ss.erase(la);
		ss.insert({(la.first + fi.first - 1) / fi.first, la.second});
	}

	cout << op.size() << "\n";
	for (auto i : op)
	{
		cout << i.first << " " << i.second << "\n";
	}
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
