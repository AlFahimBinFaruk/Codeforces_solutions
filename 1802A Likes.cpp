// https://codeforces.com/problemset/problem/1802/A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	int likes = 0, dislikes = 0;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;

		if (num < 0)
		{
			dislikes++;
		}
		else
		{
			likes++;
		}
	}

	// max likes on post.
	for (int i = 1; i <= likes; i++)
	{
		cout << i << " ";
	}
	for (int i = 1; i <= dislikes; i++)
	{
		cout << (likes - i) << " ";
	}
	cout << "\n";

	// min likes
	for (int j = 1; j <= min(likes, dislikes); j++)
	{
		cout << "1 0"
			 << " ";
	}
	for (int j = dislikes; j < likes; j++)
	{
		cout << (j - dislikes + 1) << " ";
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
