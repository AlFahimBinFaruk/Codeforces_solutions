// https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin >> n >> k;

    if(k<=(n+1)/2){
        cout << (2*k) - 1 << endl;
    }else{
        cout << ((k-((n+1)/2))*2) << endl;
    }
    return 0;
}
