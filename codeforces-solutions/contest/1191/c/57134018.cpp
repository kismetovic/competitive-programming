#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,k,m;
	cin>>n>>m>>k;
	long long v[m];
	
	for(int i=1;i<=m;i++){
		cin>>v[i];
	}
	long long temp=1;
	long long brojstr=0;
	long long rez=0;
	while(temp<=m){
		long long r=((v[temp]-brojstr-1)/k+1)*k+brojstr;
		while(temp<=m && v[temp]<=r){
			brojstr++;
			temp++;
		}
		rez++;
	}
	cout<<rez;
	return 0;
}
