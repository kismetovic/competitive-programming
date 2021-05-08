/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,a=0,b=0,niz[200]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		for(int i=0;i<a;i++){
			cin>>b;
			niz[b]+=1;
		//	cout<<"ssss:"<<niz[b]<<endl;
			b=0;
		}
	}
	for(int i=0;i<=100;i++){
		if(niz[i]==n) cout<<i<<" ";
	}
    return 0; 
}
