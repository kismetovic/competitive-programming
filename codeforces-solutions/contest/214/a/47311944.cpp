/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,rez=0;
    cin>>n>>m;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            if(i*i+j==n){
                if(j*j+i==m){
                //cout<<i<<j<<endl;
                rez++;
                }
            }
        }
    }
    cout<<rez;
	return 0;
}
