// https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;

int main()
{     
    int n;
    string s;

    cin >> n;
    cin >> s;

    int r = 0;
    int g = 0;
    int b = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'R' && s[i+1] == 'R'){
            r++;
        }else if(s[i] == 'G' && s[i+1] == 'G'){
            g++;
        }else if(s[i] == 'B' && s[i+1] == 'B'){
            b++;
        }
    }

    cout << (r+g+b) << endl;
    
    return 0;
}
