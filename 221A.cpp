// https://codeforces.com/contest/221/problem/A
#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int factorial(int n){
    arr.push_back(n);
    
    if(n <= 1){
        return 1;
    }
    return factorial(n-1);
}
int main()
{
    int n;
    cin >> n;

    factorial(n);
    for(int i=1; i<n; i++){
        swap(&arr[i-1],&arr[i]);
    }

    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    
    return 0;
}
