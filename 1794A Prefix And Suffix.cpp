// https://codeforces.com/contest/1794/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	map<string, int> freq;
	for (int i = 0; i < ((2 * n) - 2); i++)
	{
		string s;
		cin >> s;
		freq[s] += 1;
	}

	bool ans = true;
	for (auto i : freq)
	{
		string a = i.first;
		string b = a;
		reverse(b.begin(), b.end());

		if ((a != b) && (freq.find(b) == freq.end()))
		{
			// not palindrone.
			ans = false;
			break;
		}
		else if ((a == b) && (freq[a] != 2))
		{
			ans = false;
			break;
		}
	}

	cout << (ans ? "YES" : "NO") << "\n";
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
