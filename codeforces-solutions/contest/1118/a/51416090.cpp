#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        long long n,a,b;
        cin>>n>>a>>b;
        if(n==1) cout<<a<<endl;
        else{
            if(n%2==0)
            cout<<min(a*n,(n/2)*b)<<endl;
            else cout<<min(a*n,(n/2)*b+a)<<endl;
        }
    }
    return 0;
}
