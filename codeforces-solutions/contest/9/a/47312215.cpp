/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y;
    string rez[7]={"0/1","1/6","1/3","1/2","2/3","5/6","1/1"};
    cin>>x>>y;
    cout<<rez[7-max(x,y)];
	return 0;
}
