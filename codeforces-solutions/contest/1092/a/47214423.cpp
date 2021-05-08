/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		//if(n==1) cout<<"a";
		int temp=97;
		char temp1=(char)temp;
		if(n%k!=0) cout<<string(n%k,temp1);
		for(int i=0;i<k;i++){
			cout<<string(n/k,temp1);
			temp++;
			temp1=(char)temp;
		}
		cout<<endl;
	}
	return 0;
}