#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    long long pozicija=0,maks=0;
    vector<long long> v;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        v.push_back(a);
        if(a>maks){
            maks=a;
            pozicija=i;
        }
    }
    for(int i=0;i<pozicija-1;i++){
        if(v[i]>v[i+1]) return cout<<"NO",0;
    }
    for(int i=pozicija+1;i<n-1;i++){
        if(v[i]<v[i+1]) return cout<<"NO",0;
    }
    cout<<"YES";
    return 0;
}
