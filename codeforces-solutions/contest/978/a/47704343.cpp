/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,l,rez=0;
    vector<int> v;
    cin>>t;
    for(int i=0;i<t;i++){
       cin>>l;
       v.push_back(l);
    }
    for(int i=1;i<v.size();i++){
        for(int j=0;j<i;j++){
            if(v[i]==v[j]){
                v[j]=-1;
                rez++;
            }
        }
    }
    cout<<t-rez<<endl;
    for(int i=0;i<v.size();i++){
        if(v[i]==-1) continue;
        else cout<<v[i]<<" ";
    }
	return 0;
}
