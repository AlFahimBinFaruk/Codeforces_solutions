// https://codeforces.com/problemset/problem/205/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int min = std::numeric_limits<int>::max();
    int mc = 0;
    long long int in;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == min)
        {
            mc++;
        }
        if (num < min)
        {
            min = num;
            mc = 1;
            in = i + 1;
        }
    }
    if (mc == 1)
    {
        cout << in << endl;
    }
    else
    {
        cout << "Still Rozdil" << endl;
    }

    return 0;
}
