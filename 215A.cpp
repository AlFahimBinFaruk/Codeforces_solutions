// https://codeforces.com/problemset/problem/215/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,num,count = 0,max = 0;
    cin >> n;

    int arrN[n];
    for(int i=0; i<n; i++){
        cin >> arrN[i];
    }

    cin >> m;
    for(int i=0; i<m; i++){
        cin >> num;
        for(int j=0; j<n; j++){
            if((num % arrN[j]) == 0){
                int k = num / arrN[j];
                if(k > max){
                    max = k;
                    count = 1;
                }else if(max == k){
                    count++;
                }
                break;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
