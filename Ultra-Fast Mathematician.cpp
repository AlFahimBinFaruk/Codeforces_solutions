// https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string one;
    string two;

    cin >> one;
    cin >> two;

    int length = one.length();
    string result = "";
    for(int i=0; i<length; i++){
        if(one[i] != two[i]){
            result += '1';
        }else{
            result += '0';
        }
    }
    cout << result << endl;
    return 0;
}
