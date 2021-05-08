#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    double n,m;
    cout<<setprecision(8);
    double mini=100;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        double a,b;
        cin>>a>>b;
        mini=min(mini,a/b);
    }
    cout<<m*mini;
    return 0;
}