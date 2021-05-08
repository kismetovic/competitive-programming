#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n1,n2,k1,k2;
	cin>>n1>>n2>>k1>>k2;
	if(n1>n2) cout<<"First";
	else cout<<"Second";
	return 0;
}