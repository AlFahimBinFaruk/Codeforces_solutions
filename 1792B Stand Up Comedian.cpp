// https://codeforces.com/contest/1792/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int t1, t2, t3, t4;
	cin >> t1 >> t2 >> t3 >> t4;
	if(t1 == 0){
		cout << 1 << "\n";
		return;
	}
	int jokes = t1 + (min(t2,t3) * 2) + min(t1+1,abs(t2-t3)+t4);
	cout << jokes << "\n";
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
