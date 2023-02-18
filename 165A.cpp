// https://codeforces.com/problemset/problem/165/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[n][2];
    for(int i=0; i<n; i++){
        int n1,n2;
        cin >> n1 >> n2;
        arr[i][0] = n1;
        arr[i][1] = n2;
    }

    int result = 0;
    for(int i=0; i<n; i++){
        int cn1 = arr[i][0];
        int cn2 = arr[i][1];

        int r=0,l=0,t=0,b=0;
        for(int j=0; j<n; j++){
            if(arr[j][0] > cn1 && arr[j][1] == cn2){
                r = 1;
            }else if(arr[j][0] < cn1 && arr[j][1] == cn2){
                l = 1;
            }else if(arr[j][0] == cn1 && arr[j][1] < cn2){
                b = 1;
            }else if(arr[j][0] == cn1 && arr[j][1] > cn2){
                t = 1;
            }
        }
        if(r == 1 && l == 1 && t == 1 && b == 1){
            result++;
        }
    }

    cout << result << endl;
    return 0;
}
