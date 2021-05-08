#include <bits/stdc++.h>

using namespace std;
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,par=0,nepar=0;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        if(a%2!=0) nepar++;
        else par++;
    }
    if(par>nepar) cout<<nepar;
    else cout<<par;
    return 0;
}