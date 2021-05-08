#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, ans , c = 1e9;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		a -= i-1;
		if(c > (a+n-1)/n){
			c = (a+n-1)/n;
			ans = i;
		}
	}
	cout<<ans;
}