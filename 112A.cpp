// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    for (int i = 0; i < a.length(); i++)
    {
        a[i] = (a[i] - 'A' + 97);
        b[i] = (b[i] - 'A' + 97);
    }

    for (int j = 0; j < a.length(); j++)
    {
        if (a[j] < b[j])
        {
            cout << -1 << endl;
            return 0;
        }
        else if (b[j] < a[j])
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}
