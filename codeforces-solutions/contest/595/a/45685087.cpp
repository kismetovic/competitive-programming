/*
ID: ADNAN KISMETOVIC
USER:kismetovic 
LANG: C++
JUDGE:CODEFORCES.COM
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n,m,a,b,rez=0;
    vector<pair<int,int> > v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>a>>b;
    		v.push_back(make_pair(a,b));
		}
	}
	for(int i=0;i<v.size();i++){
		if(v[i].first==1 or v[i].second==1) rez++;
	}
	cout<<rez;
	return 0;
}
