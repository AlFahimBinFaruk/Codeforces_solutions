// https://codeforces.com/contest/1796/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string a, b;
	cin >> a >> b;

	if (a[0] == b[0])
	{
		cout << "YES"
			 << "\n";
		cout << a[0] << "*"
			 << "\n";
	}
	else if (a[a.length() - 1] == b[b.length() - 1])
	{
		cout << "YES"
			 << "\n";
		cout << "*" << a[a.length() - 1] << "\n";
	}
	else
	{
		for (int i = 0; i < b.length() - 1; i++)
		{
			string t = "";
			t += b[i];
			t += b[i + 1];
			if (a.find(t) != string::npos)
			{
				cout << "YES"
					 << "\n";
				cout << "*" << t << "*"
					 << "\n";
				return;
			}
		}
		cout << "NO"
			 << "\n";
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
