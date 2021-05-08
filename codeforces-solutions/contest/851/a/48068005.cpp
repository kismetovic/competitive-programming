#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,t,spec=0;
    cin>>n>>k>>t;
    spec=min(t,min(k,n+k-t));
    cout<<spec;
    return 0;
}
