// https://codeforces.com/contest/1794/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n;
	cin >> n;

	long long t = 2 * n;
	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	if (arr[0] == 1)
	{
		arr[0]++;
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] == 1)
		{
			arr[i]++;
		}

		if (arr[i] % arr[i - 1] == 0)
		{
			arr[i]++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
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
