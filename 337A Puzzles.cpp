// https://codeforces.com/contest/337/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
       cin >> arr[i];
    }
    sort(arr,arr+m);
    
    int r = arr[n-1] - arr[0];
    for(int j=1; j<=m-n; j++){
        r = min(r,arr[j+n-1] - arr[j]);
    }

    cout << r << endl;
    return 0;
}
