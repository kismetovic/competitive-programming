#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,g,h,rezultat=0;
	vector<pair<int,int> > v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h>>g;
		v.push_back(make_pair(h,g));
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			else{
				if(v[i].first==v[j].second or v[i].second==v[i].first)
				rezultat++;
			}
		}
	}
	cout<<rezultat;
	return 0;
}
