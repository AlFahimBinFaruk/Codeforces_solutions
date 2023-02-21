// https://codeforces.com/contest/208/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.length();
    int i = 0;
    int r = 1;

    string ans = "";
    while(i<n){
        if(s[i] == 'W'){
            if(s[r] == 'U' && s[r+1] == 'B'){
                i = r + 1 + 1;
                r = i + 1;
                if(i > 3){
                    ans += " ";
                }
                continue;
            }
        }
        ans += s[i];
        i++;
        r++;
    }

    cout << ans << endl;

    return 0;
}
