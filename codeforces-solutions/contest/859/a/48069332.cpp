#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,rez=0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(v[n-1]>25) cout<<v[n-1]-25;
    else cout<<0;
    return 0;
}
