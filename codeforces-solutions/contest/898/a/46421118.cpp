/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n%10==5) return cout<<n+5,0;
	else if(n%10>5) return cout<<n+(10-(n%10)),0;
	else return cout<<n-(n%10),0;
	return 0;
}
