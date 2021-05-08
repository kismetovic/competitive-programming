#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,rez=0;
	cin>>n;
//	if(n==2)return cout<<1,0;
	for(int i=1;i<=n;i++){
		if(n%i==0 && n!=i) rez++;
	}
	cout<<rez<<endl;
	return 0;
}
