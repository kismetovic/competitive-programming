#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,d=0,b=0;
	char a[1000000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]=='D') d++;
		else b++;
	}
	if(d>b) return cout<<"Danik" ,0;
	else if(b>d) return cout<<"Anton",0;
	else if(b==d)cout<<"Friendship";
	return 0;
}
