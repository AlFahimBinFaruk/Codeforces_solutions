// https://codeforces.com/problemset/problem/445/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            char c = s[j];
            if (c == '.')
            {
                // Its just a pattern that you have to find out by looking at the outputs.
                if ((i + j) % 2 == 0)
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }
            }
            else if (c == '-')
            {
                arr[i][j] = '-';
            }
        }
    }

    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}
