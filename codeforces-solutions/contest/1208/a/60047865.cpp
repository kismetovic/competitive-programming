#include <bits/stdc++.h>
 
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    long long n,k;
    cin>>k;
    while(k--){
        int a,b,n;
        cin>>a>>b>>n;
        if(n%3==0) cout<<a<<endl;
        else if(n%3==1) cout<<b<<endl;
        else cout<<(a^b)<<endl;
    }
    return 0;
}