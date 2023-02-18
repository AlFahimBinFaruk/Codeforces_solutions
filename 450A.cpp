// https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
     
    double maxV = 0.00;
    int r; 
    for(int i=1; i<=n; i++){
        double num;
        cin >> num; 
        
        if(ceil(num/m) >= maxV){
            r = i;
            maxV = ceil(num / m);
        }
    }

    cout << r << endl;
    return 0;
}
