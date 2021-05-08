#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long n,maks=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        maks=max(maks,a);
        sum+=a;
    }
    if(sum%2==1 or sum<2*maks) cout<<"NO";
    else cout<<"YES";
    return 0;
}
