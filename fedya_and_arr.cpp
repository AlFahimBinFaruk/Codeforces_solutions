// https://codeforces.com/contest/1793/my
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;

    while(t--){
        int x;
        int y;

        cin >> x >> y;
        // length of arr.    
        cout << ((x-y) + (x-y-1) + 1) << endl;
        // arr
        for(int i=y+1; i<=x; i++){
            cout << i << " ";
        }
        for(int j=x-1; j>=y; j--){
            cout << j << " ";
        }

        cout << "\n";
    }
    return 0;
}
