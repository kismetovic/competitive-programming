/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t,l,r;
    cin>>t;
    for(int i=0;i<t;i++){
        int jest=1;
        cin>>l>>r;
        int temp;
        temp=l;
        pocetak:
        for(int i=l;i<=r;i++){
            if(l*2<=r){
                cout<<l<<" "<<l*2<<endl;
                break;
            }
        }
    }
	return 0;
}
