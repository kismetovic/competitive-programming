#include <bits/stdc++.h>

using namespace std;

int main(){
	const long long m=1e9+7;
	long long x,k;
	cin>>x>>k;
	if(x==0) return cout<<0,0;
	x=x%m;
	long long pk=1;
	long long t=2;
	while(k>0){
		if(k%2==1)
			pk=(pk*t)%m;
		t=(t*t)%m;
		k/=2;
	}
	long long rez;
	rez=((((2*pk)%m*x)%m-pk)%m+1)%m;
	if(rez<0) rez+=m;
	cout<<rez;
	return 0;
}
