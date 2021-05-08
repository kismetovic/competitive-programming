/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t,k,rez=0,price=1000000;
    cin>>n;
    while(n--){
        cin>>k>>t;
        price=min(price,t);
        rez+=price*k;
    }
    cout<<rez;
	return 0;
}
