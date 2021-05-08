#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,t,spec=0;
    cin>>n>>k>>t;
    for(int i=1;i<=t;i++){
        if(i<=k){
            spec++;
            continue;
        }
        if(i>n) spec--;
    }
    cout<<spec;
    return 0;
}
