// https://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 0 = . , 1 = -. , 2 = --
    string borze;
    cin >> borze;
    
    int n = borze.length();

    unordered_map<char,char> bMap;
    bMap['z'] = '0';  // "."
    bMap['o'] = '1'; // "-."
    bMap['t'] = '2'; // "--"

    string result;

    for(int i=0; i<n; i++){
        
        if(borze[i] == '.'){
            result += bMap['z'];
        }else if(borze[i] == '-' && borze[i+1] == '.'){
            result += bMap['o'];
            i++;
        }else if(borze[i] == '-' && borze[i+1] == '-'){
            result += bMap['t'];
            i++;
        }
    }

    cout << result << endl;

    return 0;
}
