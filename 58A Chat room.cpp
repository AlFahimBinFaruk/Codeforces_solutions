// https://codeforces.com/problemset/problem/58/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string m = "hello";
    string r = "";
    int mi =0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == m[mi]){
            r += s[i];
            mi++;
        }
    }

    if(r==m){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
