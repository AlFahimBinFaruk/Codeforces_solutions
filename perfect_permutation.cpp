// https://codeforces.com/problemset/problem/233/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // for any odd number there cant be any permutaion.
    if(n % 2 != 0){
        cout << -1 << endl;
        return 0;
    }

    vector <int> arr;
    for(int i=0; i<n; i++){
        arr.push_back(i+1);
    }

    
    int r=1;
    while(r<n){
        int l = r-1;
        // swap
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        r = r+2;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
