// https://codeforces.com/problemset/problem/352/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[n];
	int c5 = 0, c0 = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		arr[i] = num;
		if (num == 5)
		{
			c5 += 1;
		}
		else if (num == 0)
		{
			c0 += 1;
		}
	}

	if (c0 == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		int k = c5 / 9;
		for (int i = 0; i < (k * 9); i++)
		{
			cout << 5;
		}
		if (k * 9 == 0)
		{
			cout << 0;
		}
		else
		{
			for (int j = 0; j < c0; j++)
			{
				cout << 0;
			}
		}
	}

	cout << "\n";

	return 0;
}
