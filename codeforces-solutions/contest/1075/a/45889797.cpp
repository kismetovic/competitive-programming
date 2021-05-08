#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,x,y,cnt,cnt1;
	cin>>n;
	cin>>x>>y;
	if(x==n && n==y) return cout<<"Black",0;
	if(x==1 && 1==y) return cout<<"White",0;
	cnt=max((x-1),(y-1));
	cnt1=max((n-x),(n-y));
	if(cnt<=cnt1) cout<<"White";
	else cout<<"Black";
	return 0;
}
