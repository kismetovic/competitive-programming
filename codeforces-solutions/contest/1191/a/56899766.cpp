#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int rez;
	rez=n%4;
	if(rez==1) cout<<"0 A";
	else{
		if((n+1)%4==1) return cout<<"1 A",0;
		if((n+2)%4==1) return cout<<"2 A",0;
		if(n%4==3) return cout<<"0 B",0;
		if((n+1)%4==3) return cout<<"1 B",0;
		if((n+2)%4==3) return cout<<"2 B",0;
		if(n%4==2) return cout<<"0 C",0;
		if((n+1)%4==2) return cout<<"1 C",0;
		if((n+2)%4==2) return cout<<"2 C",0;	
	}
	return 0;
}
