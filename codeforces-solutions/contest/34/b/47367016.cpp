/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,rez=0,a;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
        if(v[i]>0) continue;
        rez+=v[i];
    }
    cout<<abs(rez);
	return 0;
}
