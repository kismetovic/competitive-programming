/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,a,sum=0,sum1=0;
    vector<long long> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    if(sum%2==0) return cout<<sum,0;
    sum=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            v.erase(v.begin()+i);
            break;
        }
    }
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum;
	return 0;
}
