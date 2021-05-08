/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y,z,t1,t2,t3,step,elev;
	cin>>x>>y>>z>>t1>>t2>>t3;
	step=abs(x-y)*t1;
	elev=(abs(z-x)*t2)+(abs(x-y)*t2)+(t3*3);
//	cout<<elev<<" "<<step<<endl;
	if(elev<=step) cout<<"YES";
	else cout<<"NO";
    return 0; 
}
