// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;

int main()
{  
    string s;
    cin >> s;

    int n = s.length();
    sort(s.begin(),s.end());

    for(int i=0; i<n; i++){
        if(s[i] != '+'){
            cout << s[i];
            if(i != n-1){
                cout << "+";
            }
        }
    }

    cout << "\n";
    return 0;
}
