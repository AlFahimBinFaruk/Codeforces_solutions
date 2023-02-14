// https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int u = 0;
    int l = 0;
    for(int i=0; i<n; i++){
        if(s[i] >= 65 && s[i] <= 90){
            // upper
            u++;
        }else if(s[i] >= 97 && s[i] <= 122){
            // lower
            l++;
        }
    }
    
    if(u > l){
        // convert all to upper
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }else{
        // convert all to lower.
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }

    cout << s << endl;
	
    return 0;
}
