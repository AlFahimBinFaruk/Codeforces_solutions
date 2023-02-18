// https://codeforces.com/problemset/problem/272/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int num;
    int totalF = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        totalF += num;
    }

    int r = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((totalF + i) % (n + 1) != 1)
        {
            r += 1;
        }
    }

    cout << r << endl;
    return 0;
}
