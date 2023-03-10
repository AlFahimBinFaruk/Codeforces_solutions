// https://codeforces.com/problemset/problem/1781/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<int> arr(n+1,0);
    for(int i=0; i<n; i++){
        int p;
        cin >> p;
        arr[p] += 1;
    }

    ll ans = 0,sum = 0;
    for(int i=0; i<=n; i++){
        if(arr[i] == 0 && sum == i){
            ans++;
        }
        sum += arr[i];
    }
    cout << ans << "\n";
}

int main()
{
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
