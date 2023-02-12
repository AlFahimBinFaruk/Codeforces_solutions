// https://codeforces.com/contest/1793/problem/C
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> myArr[i];
    }

    int l = 0;
    int r = n - 1;

    int min = 1;
    int max = n;

    int pl;
    int pr;

    while (l < r)
    {
        pl = l;
        pr = r;

        if (myArr[l] == min)
        {
            l++;
            min++;
        }
        else if (myArr[l] == max)
        {
            l++;
            max--;
        }

        if (myArr[r] == min)
        {
            r--;
            min++;
        }
        else if (myArr[r] == max)
        {
            r--;
            max--;
        }

        // if condition dont match then we have got a result.
        if (pl == l && pr == r)
        {
            cout << (l + 1) << " " << (r + 1) << endl;
            // end program here
            return;
        }
    }

    // if we dont get any result.
    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }
    return 0;
}
