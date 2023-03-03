// https://codeforces.com/contest/1800/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin >> n >> k;

    map<char,long long> cm,sm;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;

        if(isupper(c)){
            cm[c] += 1;
        }else{
            sm[c] += 1;
        }
    }

    int bulr = 0;
    for(auto e:cm){
        char x = tolower(e.first);
        while((sm.find(x) != sm.end()) && sm[x] > 0 && cm[e.first] > 0){
            bulr++;
            sm[x] -= 1;
            cm[e.first] -= 1;
        }

        // see if we can get some extra pair after k op.
        while(cm[e.first] >= 2 && k>0){
            bulr++;
            k--;
            cm[e.first] -= 2;
        }
    }

    for(auto e:sm){
        // see if we can get some extra pair after k op.
        while(sm[e.first] >= 2 && k>0){
            bulr++;
            k--;
            sm[e.first]  -= 2;
        }
    }

    cout << bulr << "\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
