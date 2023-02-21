// https://codeforces.com/problemset/problem/214/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    int r = 0;
    for(int a=0; a*a <= n && a <= m; a++){
        int b = n - (a * a);
        if((a + (b * b)) == m){
            r++;
        }
    } 
    cout << r << endl;
    return 0;
}
