#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,rez=0;
	cin>>n;
	string a;
	string b;
	cin>>a;
	cin>>b;
	for(int i=0;i<n;i++){
		rez+=min(abs(a[i]-b[i]),(10-max(a[i],b[i])+min(a[i],b[i])));
	}
	cout<<rez;
	return 0;
}