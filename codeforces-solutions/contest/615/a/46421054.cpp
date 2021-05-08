/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,s[1000]={0};
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		for(int j=0;j<t;j++){
			int k;
			cin>>k;
			s[k]++;
		}
	}
	for(int i=1;i<=m;i++){
		if(s[i]==0) return cout<<"NO",0;
	}
	cout<<"YES";
	return 0;
}
