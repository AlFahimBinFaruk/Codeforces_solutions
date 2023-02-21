// https://codeforces.com/contest/34/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    
    long long r = 0;
    for(int i=0; i<m; i++){
        if(arr[i] < 0){
            r += abs(arr[i]);
        }
    }

    cout << r << endl;
    return 0;
}
