// https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalML = (k*l) / nl;
    int totalLime = c * d;
    int totalSalt = p / np;

    int result = min({totalML,totalLime,totalSalt}) / n;

    cout << result << endl;
    return 0;
}
