// https://codeforces.com/contest/1791/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	int n;
	string s;
	cin >> n >> s;

	vector<int> s1(26, 0), s2(26, 0);
	for (auto x : s)
	{
		s1[x - 'a']++;
	}

	int ans = 0;
	for (auto x : s)
	{
		s1[x - 'a']--;
		s2[x - 'a']++;
		int cur = 0;
		for (int i = 0; i < 26; i++)
		{
			cur += (min(1, s1[i]) + min(1, s2[i]));
		}
		ans = max(ans, cur);
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
