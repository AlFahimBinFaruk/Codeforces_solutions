// https://codeforces.com/contest/1800/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	string s;
	cin >> n >> s;

	int m, e, o, w;
	int i = 0;
	if (s[i] == 'm' || s[i] == 'M')
	{
		while (s[i] == 'm' || s[i] == 'M')
		{
			i++;
			m = 1;
		}
	}
	else
	{
		cout << "NO" << endl;
		return;
	}

	if (s[i] == 'e' || s[i] == 'E')
	{
		while (s[i] == 'e' || s[i] == 'E')
		{
			i++;
			e = 1;
		}
	}
	else
	{
		cout << "NO" << endl;
		return;
	}

	if (s[i] == 'o' || s[i] == 'O')
	{
		while (s[i] == 'o' || s[i] == 'O')
		{
			i++;
			o = 1;
		}
	}
	else
	{
		cout << "NO" << endl;
		return;
	}

	if (s[i] == 'w' || s[i] == 'W')
	{
		while (s[i] == 'w' || s[i] == 'W')
		{
			i++;
			w = 1;
		}
	}
	else
	{
		cout << "NO" << endl;
		return;
	}

	if (m == 1 && e == 1 && o == 1 && w == 1 && i == n)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
int main()
{
	long long t;
	cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}
