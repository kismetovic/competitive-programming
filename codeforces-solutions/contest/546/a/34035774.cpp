#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,n,w,sum=0,sum1;
	cin>>k>>n>>w;
	for(int i=1;i<=w;i++){
		sum+=k*i;
	}
//	cout<<sum<<endl;
	sum1=sum-n;
	if(sum1>0)
	cout<<sum1;
	else cout<<"0";
	return 0;
}
