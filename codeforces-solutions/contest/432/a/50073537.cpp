#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    vector<int> v;
    cin>>n>>k;
    if(k>5) return cout<<0,0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int rez=0;
    for(int i=0;i<n;i++){
        if(v[i]+k<=5){
            rez++;
        }
    }
    cout<<rez/3;
    return 0;
}
