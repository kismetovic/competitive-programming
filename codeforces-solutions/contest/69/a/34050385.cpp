#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,sum=0,x,y,z,a=0,b=0,c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y>>z;
		a+=x;
		b+=y;
		c+=z;
	}
	if(a==0 && b==0 && c==0)
	cout<<"YES";
	else cout<<"NO";

	return 0;
}
