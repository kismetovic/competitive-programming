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
        long long n,rez=0;
        cin>>n;
        vector<long long> v;
        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            v.push_back(a);
        }
        stack<long long> s;
        s.push(v[0]);
        for(int i=1;i<n;i++){
            if(s.empty()){
                s.push(v[i]);
                continue;
            }
            while(s.empty()==false && s.top()>v[i]){
                rez++;
                s.pop();
            }
            s.push(v[i]);
        }
        cout<<rez<<endl;
    }
    return 0;
}