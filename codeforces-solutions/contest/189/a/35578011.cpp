#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,a,b,c,res=0;
    vector <long long> v;
    cin>>n>>a>>b>>c;
    for (int i=0; i<=n;i++){
        for (int j =0;j<=n;j++){
            if ((n-a*i-b*j)%c==0 && n-a*i-b*j>=0){
                v.push_back(i+j+(n-a*i-b*j)/c);
            }
        }
    }
    sort(v.rbegin(),v.rend());
    res=v[0];
    cout<<res;
    return 0;
}
