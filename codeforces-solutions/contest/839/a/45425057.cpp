#include<iostream>
using namespace std;
int n,k,t=-1,i=1,a,c,s;
int main(){
for(cin>>n>>k;i<=n;i++){
	cin>>a;
	s+=a;
	c=min(8,max(0,s));
	k-=c;
	if(k<=0){t=i;break;}
	s-=c;
}
cout<<t;
}