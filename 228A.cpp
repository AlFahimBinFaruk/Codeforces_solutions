// https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> m;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        m[k] += 1;
    }

    int r = 0;
    for (auto i : m)
    {
        if (i.second == 1)
        {
            r += 0;
        }
        else if (i.second == 2)
        {
            r += 1;
        }
        else if (i.second == 3)
        {
            r += 2;
        }
        else if (i.second == 4)
        {
            r += 3;
        }
    }

    cout << r << endl;
    return 0;
}
