#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,h,m;
	cin>>n>>h>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		a[i]=h;
	}
	for(int i=0;i<m;i++){
		int l,r,x;
		cin>>l>>r>>x;
		for(int j=l;j<=r;j++){
			a[j]=min(a[j],x);
		}
	}
	//for(int i=1;i<=n;i++){
	//	cout<<a[i]<<" ";
	//}
	//cout<<endl;
	int rez=0;
	for(int i=1;i<=n;i++){
		rez+=(a[i]*a[i]);
	}
	cout<<rez;
	return 0;
}