#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,x,y,cnt,cnt1;
	cin>>n;
	cin>>x>>y;
	long long prvix=1;
	long long prviy=1;
	long long drugix=n;
	long long drugiy=n;
	if(x==drugix && drugiy==y) return cout<<"Black",0;
	if(x==prvix && prviy==y) return cout<<"White",0;
	cnt=max((x-prvix),(y-prviy));
	cnt1=max((drugix-x),(drugiy-y));
	if(cnt<=cnt1) cout<<"White";
	else cout<<"Black";
	return 0;
}
