#include <bits/stdc++.h>

using namespace std;

int n, a[5005];

int main(){
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++){
		if (a[a[a[i]]] == i){
			return cout <<"YES",0;
		}
	}
	cout <<"NO";
	return 0;
}