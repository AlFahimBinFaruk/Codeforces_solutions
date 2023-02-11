// https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a = 'H';
    char b = 'Q';
    char c = '9';
    // + increament value it dont give output.

    string input;
    int length;
    cin >> input;
    length = input.length();
    
    string result = "NO";
    for(int i=0; i<length; i++){
        if(input[i] == a || input[i] == b || input[i] == c){
            result = "YES";
            break;
        }
    }

    cout << result << endl;
    return 0;
}
