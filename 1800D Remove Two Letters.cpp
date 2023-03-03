// https://codeforces.com/contest/1800/problem/D
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for(int i=1; i<n; i++){
        if(i>=2 && (s[i] == s[i-2])){
            continue;
        }
        if(i>=3 && (s[i] == s[i-2]) && (s[i-1] == s[i-3])){
            continue;
        }

        ans++;
    }

    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
