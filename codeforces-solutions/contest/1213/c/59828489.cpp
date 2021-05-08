#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        n=n/m;
        vector<int> v(10);
        for(int i=0;i<10;i++){
            v[i]=((i+1)*m)%10;
        }
        long long sum=0;
        for(int i=0;i<n%10;i++){
            sum+=v[i];
        }
        cout<<sum+n/10*accumulate(v.begin(),v.end(),0LL)<<endl;
    }
    return 0;
}