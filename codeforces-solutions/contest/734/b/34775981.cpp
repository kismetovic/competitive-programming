#include <bits/stdc++.h>

using namespace std;

int main(){
	int k2,k3,k5,k6;
	int sum=0;
	cin>>k2>>k3>>k5>>k6;
	while(k2>0 && k5>0 && k6>0){
		sum+=256;
		k2--;
		k5--;
		k6--;
	}
	while(k2>0 && k3>0){
		sum+=32;
		k2--;
		k3--;
	}
	cout<<sum;
	return 0;
}
