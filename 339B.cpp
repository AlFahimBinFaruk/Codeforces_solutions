// https://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,m;
    cin >> n >> m;

    long long time = 0;
    long long prev = 1;

    for(int i=0; i<m; i++){
        long long a;
        cin >> a;

        if(prev > a){
            time += (n - prev) + a; 
        }else{
            time += a - prev;
        }

        prev = a;
    }
    cout << time << endl;
    return 0;
}
