#include<bits/stdc++.h>

using namespace std;

bool prost(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<m;i++){
        if(prost(i)) return cout<<"NO",0;
    }
    if(prost(m)) return cout<<"YES",0;
    cout<<"NO",0;
    return 0;
}