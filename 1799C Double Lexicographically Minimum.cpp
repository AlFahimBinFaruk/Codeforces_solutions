//https://codeforces.com/contest/1799/problem/C
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;

	int n = s.length();
	vector<char> ans(n);

	multiset<char> ms;
	for (int i = 0; i < n; i++)
	{
		ms.insert(s[i]);
	}

	int i = 0;
	int j = n - 1;

	int di = -1, dj = -1;
	while (!ms.empty() && i <= j)
	{

		if (i == j)
		{
			char first = *ms.begin();
			ans[i] = first;
			break;
		}

		char first = *ms.begin();
		ms.erase(ms.find(first));
		char second = *ms.begin();
		ms.erase(ms.find(second));

		ans[i] = second;
		ans[j] = first;

		if (first == second)
		{
			i++;
			j--;
			continue;
		}

		di = i;
		dj = j;

		i++;
		j--;

		while (i <= j)
		{
			char next = *ms.begin();
			ms.erase(ms.find(next));
			ans[i] = next;
			i++;
		}
	}

	if (di != -1)
	{

		bool ok = true;
		for (int i = di + 1; i < dj; i++)
		{
			if (ans[i] != ans[i - 1])
			{
				ok = false;
				break;
			}
		}

		if (ok)
		{
			int mid = (di + dj + 1) / 2;
			swap(ans[mid], ans[dj]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i];
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
