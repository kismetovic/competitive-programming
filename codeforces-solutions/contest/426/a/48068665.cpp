#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s;
    vector<int> v;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<v.size()-1;i++){
        sum+=v[i];
    }
    if(sum>s) cout<<"NO";
    else cout<<"YES";
    return 0;
}
