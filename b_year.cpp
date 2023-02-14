// https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 2016;
    cin >> num;

    bool run = true;
    while (run)
    {    
        num++;
        // declaring output string stream
        ostringstream str1;

        // Sending a number as a stream into output
        // string
        str1 << num;

        // the str() converts number into string
        string numStr = str1.str();
        sort(numStr.begin(),numStr.end());
        int n = numStr.length();

        int l = 0;
        int r = 1;
        
        bool dup = false;
        while (r < n)
        {
            if(numStr[l] == numStr[r]){
                dup = true;
                break;
            }
            l++;
            r++;
        }

        if(dup == false){
            run = false;
            break;
        }
    }

    cout << num << endl;

    return 0;
}
