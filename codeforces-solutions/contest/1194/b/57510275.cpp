#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
       int n,m;
       cin>>n>>m;
       vector<string> v(n);
       for(int i=0;i<n;i++){
            cin>>v[i];
       }
       vector<int> cnt(n),cnt1(m);
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cnt[i]+=(v[i][j]=='.');
            cnt1[j]+=(v[i][j]=='.');
        }
       }
       int rez=n+m;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rez=min(rez,cnt[i]+cnt1[j]-(v[i][j]=='.'));
        }
       }
       cout<<rez<<endl;
    }
    return 0;
}
