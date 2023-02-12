// https://codeforces.com/contest/1793/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;

    while(t--){
        long long int a;
        long long int b;
        long long int n;
        long long int m;

        cin >> a >> b;
        cin >> n >> m;

        long long int result = 0;

        result += a * (n / (m+1)) * m;
        result += min((n%(m+1)*a),n%(m+1)*b);
        cout << min(result,(n*b)) << endl;
    }
    return 0;
}
