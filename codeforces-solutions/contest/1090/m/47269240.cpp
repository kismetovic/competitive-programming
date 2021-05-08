/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,rez=1,maks=0,temp,a[100000];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0){
		temp=a[i-1];
		if(a[i]==temp){
			//maks=max(rez,maks);
			rez=1;
		}
		else rez++;
	}
		maks=max(rez,maks);
	}
	cout<<maks;
	return 0;
}
