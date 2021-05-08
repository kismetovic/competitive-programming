#include <bits/stdc++.h>

using namespace std;


int main(){
	int a,b,n,temp=0,win=0;
	cin>>a>>b>>n;

	temp=a;
	while(n>0){
		n-=__gcd(temp,n);
		if(temp==a){
			temp=b;
		}
		else if(temp==b){
			temp=a;
		}
		if(win==0 && n>0){
			win=1;
		}
		else if(win==1 && n>0){
			win=0;
		}
	}
	cout<<win;
	return 0;
}
