// https://codeforces.com/problemset/problem/227/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int mn;
    long long int m;
    cin >> n;

    long long int mArr[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        mArr[num] = i + 1;
    }
    cin >> mn;

    long long int vs = 0;
    long long int pt = 0;

    while (mn--)
    {
        cin >> m;
        vs += mArr[m];
        pt += (n + 1 - mArr[m]);
    }

    cout << vs << " " << pt << endl;
    return 0;
}
