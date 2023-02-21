// https://codeforces.com/problemset/problem/219/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string s;

    cin >> k >> s;
    
    int n = s.length();
    map<char,int> m;
    for(int i=0; i<n; i++){
        m[s[i]] += 1;
    }
    
    string r = "";
    for(auto i:m){
        if(i.second % k != 0){
            cout << -1 << endl;
            return 0;
        }
        int times = i.second / k;
        while(times--){
            r += i.first;
        }
    }
     
    string t = r; 
    for(int i=0; i<k-1; i++){
        r += t;
    }

    cout << r << endl;
    return 0;
}
