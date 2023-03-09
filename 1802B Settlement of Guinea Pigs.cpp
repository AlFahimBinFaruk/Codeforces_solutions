// https://codeforces.com/problemset/problem/1802/B
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	int pigs = 0,curIv = 0,maxIv=0;
	while(n--){
		int c;
		cin >> c;
		if(c == 1){
			pigs++;
			curIv++;
			maxIv = max(maxIv,curIv);
		}else{
			int p=0;
			if(pigs){
				p += (pigs / 2) +1;
			}
			//as doctor came we know their gender.
			curIv = p;
			maxIv = max(maxIv,curIv);
		}
	}

	cout << maxIv << "\n";
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
