// https://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	n = n*3;
	int rss = 3;

	int a=0;
	int b=0;
	int c=0;

	for(int i=0; i<n; i++){
		int num;
		cin >> num;
		if(rss==3){
			a += num;
			rss--;
		}else if(rss == 2){
			b += num;
			rss--;
		}else if(rss==1){
			c += num;
			rss = 3;
		}
	}

	if(a == 0 && b == 0 && c == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
