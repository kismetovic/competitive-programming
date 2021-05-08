/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,c,rez=1,p;
	vector<long long> v;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cin>>p;
		v.push_back(p);
	}
	for(int i=0;i<v.size();i++){
		if(i==0) continue;
		if((v[i]-v[i-1])>c) rez=1;
		else rez++;
	//	cout<<v[i]<<" "<<v[i-1]<<" "<<rez<<endl;
	}
	cout<<rez;
	return 0;
}
