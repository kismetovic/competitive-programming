#include <bits/stdc++.h>
 
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int q;
    cin>>q;
    while(q--){
        int n,t=0;
        vector<long long> v;
        cin>>n;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            if(a==2048) t=a;
            v.push_back(a);
        }

        if(t==2048){
            cout<<"YES\n";
            continue;
        }        
        sort(v.rbegin(),v.rend());
        int temp=0;
        pocetak:
            for(int i=1;i<v.size();i++){
                if(v[i]==2048 or v[i]+v[i-1]==2048){
                    //cout<<v[i]<<" "<<v[i-1]<<endl;
                        temp=1;
                        cout<<"YES\n";
                        break;
                }
                else if(v[i-1]==v[i]){
                    v[i]*=2;
                    v.erase(v.begin()+(i-1));
                    goto pocetak;
                }

            }
            if(temp!=1) cout<<"NO\n";
            else temp=0;
    }
    return 0;
}