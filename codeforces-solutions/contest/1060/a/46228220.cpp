/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	string a;
	int n,cnt=0;
	cin>>n;
	cin>>a;
	for(int i=0;i<n;i++){
		if(a[i]=='8') cnt++;
	}
	if(n>=11){
		if(n/11<=cnt) cout<<n/11;
		else if(cnt==0) return cout<<0,0;
		else cout<<cnt;
	}
	else cout<<0;
    return 0; 
}
