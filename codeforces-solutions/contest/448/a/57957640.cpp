#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,a=0,b=0,t,t1,t2;
	cin>>t>>t1>>t2;
	a=t+t1+t2;
	cin>>t>>t1>>t2;
	b=t+t1+t2;
	cin>>n;
	if((a+5-1)/5+((b+10-1)/10)>n) return cout<<"NO",0;
	else return cout<<"YES",0;
	return 0;
}