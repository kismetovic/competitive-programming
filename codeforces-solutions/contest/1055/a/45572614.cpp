#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,m,a[1100],b[1100];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	for(int i=1;i<=n;i++){
	    cin>>b[i];
	}
	if(a[1]!=1) return cout<<"NO",0;
	if(a[m]==1) return cout<<"YES",0;
	if(b[m]==1)
	    for(int i=m+1;i<=n;i++)
	        if(a[i]==1&&b[i]==1) return cout<<"YES",0;
	cout<<"NO";
	return 0;
}