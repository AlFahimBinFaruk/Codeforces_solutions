// https://codeforces.com/problemset/problem/224/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    double a,b,c;
    a = sqrt(s1 * (s2 / s3));
    b = sqrt(s2 * (s3 / s1));
    c = sqrt(s3 * (s1 / s2));

    double r = a + b + c;
    cout << (4 * r) << endl;
    
    return 0;
}
