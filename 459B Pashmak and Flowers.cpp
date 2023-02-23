// https://codeforces.com/problemset/problem/459/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    long long diff = arr[n - 1] - arr[0];
    if (arr[0] == arr[n - 1])
    {
        cout << diff << " " << (n - 1) * n / 2 << endl;
    }
    else
    {
        long long a = 1, b = 1;
        for (int i = 1; i < n - 1; i++)
        {
            // its a combinatirics topic.
            if (arr[i] == arr[n - 1])
            {
                a++;
            }
            else if (arr[i] == arr[0])
            {
                b++;
            }
        }

        cout << diff << " " << (a * b) << endl;
    }
    return 0;
}
