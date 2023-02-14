// https://codeforces.com/problemset/problem/275/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int givenArr[3][3];
    cin >> givenArr[0][0] >> givenArr[0][1] >> givenArr[0][2];
    cin >> givenArr[1][0] >> givenArr[1][1] >> givenArr[1][2];
    cin >> givenArr[2][0] >> givenArr[2][1] >> givenArr[2][2];

    int result[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int t = givenArr[i][j];

            for (int a = 0; a < t; a++)
            {   
                // current
                if (result[i][j] == 0)
                {
                    result[i][j] = 1;
                }
                else if (result[i][j] == 1)
                {
                    result[i][j] = 0;
                }
                
                // top
                if (result[i - 1][j] == 0 && ((i - 1) >= 0))
                {
                    result[i - 1][j] = 1;
                }
                else if (result[i - 1][j] == 1 && ((i - 1) >= 0))
                {
                    result[i - 1][j] = 0;
                }
                
                // bottom
                if (result[i + 1][j] == 0 && ((i + 1) <= 2))
                {
                    result[i + 1][j] = 1;
                }
                else if (result[i + 1][j] == 1 && ((i + 1) <= 2))
                {
                    result[i + 1][j] = 0;
                }
                 
                // left 
                if (result[i][j - 1] == 0 && ((j - 1) >= 0))
                {
                    result[i][j - 1] = 1;
                }
                else if (result[i][j - 1] == 1 && ((j - 1) >= 0))
                {
                    result[i][j - 1] = 0;
                }
                
                // right
                if (result[i][j + 1] == 0 && ((j + 1) <= 2))
                {
                    result[i][j + 1] = 1;
                }
                else if (result[i][j + 1] == 1 && ((j + 1) <= 2))
                {
                    result[i][j + 1] = 0;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << result[i][0] << result[i][1] << result[i][2] << endl;
    }

    return 0;
}
