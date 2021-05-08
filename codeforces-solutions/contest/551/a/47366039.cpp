/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,sum=0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(i==j) continue;
            else if(v[i]<v[j]){
                sum++;
            }
        }
        cout<<sum+1<<" ";
        sum=0;
    }
	return 0;
}
