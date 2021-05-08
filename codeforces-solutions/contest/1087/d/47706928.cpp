/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    vector<int> v[100005];
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int rez=0;
    for(int i=1;i<=n;i++){
        rez+=(v[i].size()==1);
    }
    cout<<setprecision(12)<<k/(double)rez*2.0<<endl;
	return 0;
}
