// https://codeforces.com/contest/352/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int,vector<int>> m;
    set<pair<int,int>> ms;

    for(int i=1; i<=n; i++){
        int n;
        cin >> n;

        m[n].push_back(i);
    }

    for(auto i:m){
        if(i.second.size() <= 1){
            ms.emplace(i.first,0);
        }else{
            int diff = i.second[1] - i.second[0];
            bool ok = true;
            for(int j=2;j<i.second.size(); j++){
                if(diff != (i.second[j] - i.second[j-1])){
                    ok = false;
                    break;
                }
            }

            if(ok){
                ms.emplace(i.first,diff);
            }
        }
    }

    // print
    cout << ms.size() << endl;
    for(auto i:ms){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
