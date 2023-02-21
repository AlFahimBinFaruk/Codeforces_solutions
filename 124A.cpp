// https://codeforces.com/contest/124/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    
    int r = 0;
    for(int i=1; i<=n; i++){
        if((i-1) >= a && (n-i) <= b){
            r++;
        }
    }

    cout << r << endl;
    return 0;
}
