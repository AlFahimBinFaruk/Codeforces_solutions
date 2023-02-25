// https://codeforces.com/problemset/problem/298/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;

    int time = -1;
    for (int i = 1; i <= t; i++)
    {
        char c;
        cin >> c;

        switch (c)
        {
        case 'E':
            if (sx < ex)
            {
                sx++;
            }
            break;
        case 'S':
            if (sy > ey)
            {
                sy--;
            }
            break;
        case 'W':
            if (sx > ex)
            {
                sx--;
            }
            break;
        case 'N':
            if (sy < ey)
            {
                sy++;
            }
            break;
        default:
            break;
        }

        if (sx == ex && sy == ey)
        {
            time = i;
            break;
        }
    }

    cout << time << endl;
    return 0;
}
