// https://codeforces.com/contest/1366/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;

	int ans = min(a, b);
	ans = min(ans, (a + b) / 3);
	
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
