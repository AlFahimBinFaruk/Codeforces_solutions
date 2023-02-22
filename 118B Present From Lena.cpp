// https://codeforces.com/problemset/problem/118/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int row=-n; row <=n; row++){
        int top = n - abs(row);

        // print two spaces.
        for(int i=0; i<abs(row); i++){
            cout << "  ";
        }

        // print 0 ... n-1;
        for(int j=0; j<top; j++){
            cout << j << " ";
        }

        // print n ... 1;
        for(int k=top; k>0; k--){
            cout << k << " ";
        }

        cout << 0 << endl;;
    }
    return 0;
}
