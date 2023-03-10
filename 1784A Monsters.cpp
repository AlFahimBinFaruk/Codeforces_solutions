// https://codeforces.com/problemset/problem/1784/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    sort(h.begin(), h.end());

    vector<ll> b(n);
    b[0] = 1;
    for (int i = 1; i < n; i++)
    {
        b[i] = min(b[i - 1] + 1, h[i]);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (h[i] - b[i]);
    }

    cout << ans << "\n";
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
