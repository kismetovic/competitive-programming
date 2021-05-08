#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	int n,coins=0,x=0,y=0,d=0,l=0;
	cin>>n;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='U'){
			y++;
		}
		else if(s[i]=='R'){
			x++;
		}
		if(i>0) goto pocetak;
		if(x>0 && y==0) d=1;
		else if(y>0 && x==0) l=1;
		pocetak:
			if(d==1){
				if(y>x){
			    coins++;
				d=0;
				l=1;
				}
			}
			
			else if(l==1){
				if(x>y){
					coins++;
					l=0;
					d=1;
				}
			}
	}
	cout<<coins<<endl;
	return 0;
}
