// https://codeforces.com/problemset/problem/104/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum;
    cin >> sum;
    if(sum <= 10 || sum > 21){
        cout << 0 << endl;
    }else if(sum == 20){
        cout << 15 << endl;
    }else{
        cout << 4 << endl;
    }

    return 0;
}
