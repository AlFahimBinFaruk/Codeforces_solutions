// https://codeforces.com/problemset/problem/431/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> arrD = {1, 2, 3, 4, 5};
    int mxHP = 0;
     
     
    // find the max happiness for all the possible arrangement of arrD;
    int cHP;
    vector<int> temp;
    do
    {
        cHP = 0;
        temp = arrD;
        //cout << temp.size();
        while (!temp.empty())
        {
            for (int i = 0; i < 4; i+=2)
            {
                cHP += (arr[temp[i] - 1][temp[i + 1] - 1] + arr[temp[i + 1] - 1][temp[i] - 1]);
            }
            // first person go to take shower.
            temp.erase(temp.begin(),temp.begin()+1);
        }
        mxHP = max(mxHP, cHP);
        
    } while (next_permutation(arrD.begin(), arrD.end()));

    cout << mxHP << endl;
    return 0;
}
