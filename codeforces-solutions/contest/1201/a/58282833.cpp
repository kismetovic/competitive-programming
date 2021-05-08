#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int n,m;
    vector<string> v;
    vector<int> v1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    int sum=0,rez=1,as=0,bs=0,cs=0,ds=0,es=0;
    int temp=0;
    while(m--){
        for(int i=0;i<n;i++){
            if(v[i][temp]=='A') as++;
            else if(v[i][temp]=='B') bs++;
            else if(v[i][temp]=='C') cs++;
            else if(v[i][temp]=='D') ds++;
            else es++;
        }
        sum+=max(as,max(bs,max(cs,max(ds,es))))*v1[temp];
        as=0;
        bs=0;
        cs=0;
        ds=0;
        es=0;
        temp++;
    }
    cout<<sum;
    return 0;
}