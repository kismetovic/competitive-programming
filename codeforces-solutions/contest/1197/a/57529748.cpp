#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
       int n;
       cin>>n;
       vector<int> v;
       for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
       }
       sort(v.rbegin(),v.rend());
        int maks=v[1];
        if(n-2>=maks) cout<<maks-1<<endl;
        else cout<<n-2<<endl;
    }
    return 0;
}
