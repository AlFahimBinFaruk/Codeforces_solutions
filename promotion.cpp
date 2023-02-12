// https://codeforces.com/contest/1793/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        long long int b;
        long long int n;
        long long int m;

        cin >> a >> b;
        cin >> n >> m;

        long long int result = 0;
        if (m > n)
        {
            result = a * n;
        }
        else
        {
            while (n > m)
            {
                result += m * a;
                n = n - (m + 1);
            }
            while (n > 0)
            {
                if (b < a)
                {
                    result += n * b;
                }
                else
                {
                    result += n * a;
                }

                n -= 1;
            }
        }

        printf("%lld \n",result);
    }
    return 0;
}
