#include<bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int q;
	cin>>q;
	while(q--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<(a+b+c)/2<<endl;
	}
	return 0;
}