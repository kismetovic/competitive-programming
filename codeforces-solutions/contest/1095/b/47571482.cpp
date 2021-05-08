/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    vector<int> v;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<min((abs(v[0]-v[v.size()-2])),(abs(v[1]-v[v.size()-1])));
	return 0;
}
