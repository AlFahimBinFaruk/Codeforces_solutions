// https://codeforces.com/contest/218/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m];
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr,arr+m);

    int min = 0;
    int s = n;
    for(int a=0; a<m && s>0; a++){
        int i = arr[a];
        while(i > 0 && s > 0){
            min += i;
            i--;
            s--;
        }
    }

    int max = 0;
    for(int b=0; b<n; b++){
        sort(arr,arr+m);
        max += arr[m-1];
        arr[m-1] -= 1; 
    }

    cout << max << " " << min << endl;
    return 0;
}
