/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,rez=100000000;
    cin>>n>>k;
    for(int i=k-1;i>=1;i--){
        if(n%i==0){
           return cout<<n/i*k+i,0;
        }
    }
    cout<<rez;
	return 0;
}
