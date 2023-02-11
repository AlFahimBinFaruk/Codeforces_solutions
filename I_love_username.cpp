// https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    int t;
    int num;
    int min;
    int max;

    cin >> len;
    t = len;
    int result = 0;
   
    for(int i=0; i<len; i++){
        cin >> num;

        if (i == 0)
        {
            min = num;
            max = num;
        }
        else
        {
            if (num < min)
            {
                min = num;
                result++;
            }
            else if (num > max)
            {
                max = num;
                result++;
            }
        }
    }

    cout << result << endl;
    return 0;
}
