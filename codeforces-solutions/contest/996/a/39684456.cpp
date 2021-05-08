#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,rez=0;
	cin>>n;
	if(n>=100){
		rez+=n/100;
		n%=100;
	}
	if(n>=20){
		rez+=n/20;
		n%=20;
	}
	if(n>=10){
		rez+=n/10;
		n%=10;
	}
	if(n>=5){
		rez+=n/5;
		n%=5;
	}
	cout<<rez+n;
	return 0;
}
