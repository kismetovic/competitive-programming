#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n,k;
    vector<int> v;
    vector<int> v1;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<n;i++){
        v1.push_back(v[i-1]-v[i]);
    }
    sort(v1.begin(),v1.end());
    int rez=0;
    rez=v[n-1]-v[0];
    for(int i=0;i<k-1;i++){
        rez+=v1[i];
    }
    cout<<rez;
    return 0;
}