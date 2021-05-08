#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<pair<int,int> > v;
    cin>>n;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v.push_back(make_pair(l,r));
    }
    int k,c=0;
    cin>>k;
    for(int i=0;i<v.size();i++){
        if(v[i].second>=k){
            c++;
        }
    }
    cout<<c;
    return 0;
}
