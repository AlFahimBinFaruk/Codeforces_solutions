// https://codeforces.com/contest/1800/problem/C1
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;

    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    priority_queue<long long> bonusDeck;
    long long maxPower = 0;
    for(int i=0; i<n; i++){
        // bonus card
        if(arr[i] > 0){
            bonusDeck.push(arr[i]);
        }else if(arr[i] == 0){
            // hero card
            if(!bonusDeck.empty()){
                maxPower += bonusDeck.top();
                bonusDeck.pop();
            }
        }
    }

    cout << maxPower << "\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
