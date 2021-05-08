/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long d1,d2,d3,rez=0;
	cin>>d1>>d2>>d3;
	if(d1<=d2+d3)
		rez+=d1;
	else	
		rez+=d2+d3;
	if(d3<=d2+d1)
		rez+=d3;
	else 
		rez+=d2+d1;
	if(d2<=d3+d1)
		rez+=d2;
	else 
		rez+=d3+d1;
		
	cout<<rez;
	return 0;
}
