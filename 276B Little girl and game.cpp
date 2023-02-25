// https://codeforces.com/contest/276/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int odd=0;
    vector<int> arr(26,0);
    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a'] += 1;
    }

    for(int i=0; i<26;i++){
        if(arr[i] & 1){
            odd++;
        }
    }
    
    if((odd == 0) || (odd & 1)){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
    }

    return 0;
}
