// https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    int m = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        c -= a;
        c += b;

        if(c > m){
            m = c;
        }
    }
    cout << m << endl;

    return 0;
}
