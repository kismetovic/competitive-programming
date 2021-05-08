#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,x,y,cnt,cnt1;
	cin>>n;
	cin>>x>>y;
	cnt=abs(x-1)+abs(y-1);
	cnt1=abs(n-x)+abs(n-y);
	if(cnt<=cnt1) cout<<"White";
	else cout<<"Black";
	return 0;
}
