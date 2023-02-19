// https://codeforces.com/contest/199/problem/A
#include <bits/stdc++.h>
using namespace std;
long long arr[100];

void fib()
{
    long long a = 0, b = 1, c;
    // n (0 ≤ n < 10^9)
    for (int i = 0; i <= 50; i++)
    {
        c = a + b;
        a = b;
        b = c;
        arr[i] = a;
    }
}

int main()
{
    fib();
    int n;
    cin >> n;

    if (n <= 2)
    {
        if (n == 0)
        {
            cout << 0 << " " << 0 << " " << 0 << endl;
        }
        else if (n == 1)
        {
            cout << 1 << " " << 0 << " " << 0 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << " " << 1 << " " << 0 << endl;
        }
    }
    else
    {
        int made;
        for (int i = 0; arr[i] < n; i++)
        {
            for (int j = i; arr[j] < n; j++)
            {
                for (int k = j; arr[k] < n; k++)
                {
                    made = arr[i] + arr[j] + arr[k];
                    if (made == n)
                    {
                        cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                        return 0;
                    }

                    if (made > n)
                    {
                        break;
                    }
                }
            }
        }

        cout << "I'm too stupid to solve this problem" << endl;
    }

    return 0;
}
