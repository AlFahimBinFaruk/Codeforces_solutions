//https://codeforces.com/problemset/problem/34/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int m = 1001,d =0,id1 = 1,id2 = n;
    d = abs(arr[0] - arr[n-1]);
    m = min(m,d);
    for(int i=0; i<n-1; i++){
        d = abs(arr[i] - arr[i+1]);
        if(d < m){
            m = d;
            // as it is clockwise.
            id1 = i+1;
            id2 = i+2;
        }
    }
    cout  << id1 << " " << id2 << endl;

    return 0;
}
