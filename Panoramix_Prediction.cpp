// https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    while (true)
    {
        n = n + 1;
        if (isPrime(n))
        {
            break;
        }
    }

    if (n == m)
    {
        cout << "YES" << endl;
        ;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
