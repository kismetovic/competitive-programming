#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a[100],parni=0,neparni=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>a[i];
	if(a[i]%2==0)
		parni++;
	else 
		neparni++;
	}
	if(parni>neparni){
		for(int i=1;i<=n;i++){
			if(a[i]%2!=0){
				cout<<i<<" ";
			}
		}
	}
	else{
		for(int i=1;i<=n;i++){
			if(a[i]%2==0){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
