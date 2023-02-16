// https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string g,h,f;
    cin >> g >> h >> f;
    
    int gn = g.length();
    int hn = h.length();
    int fn = f.length();
    
    if((gn+hn) > fn){
        cout << "NO" << endl;
        return 0;
    }

    unordered_map<char ,int> m;
    for(int i=0; i<gn; i++){
        m[g[i]] += 1;
    }

    for(int j=0; j<hn; j++){
        m[h[j]] += 1;
    }

    unordered_map<char,int> have;
    for(int i=0; i<fn; i++){
        have[f[i]] += 1;
    }
    
    for(int i=0; i<fn; i++){
        if((m.find(f[i]) == m.end()) || (m[f[i]] != have[f[i]])){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
