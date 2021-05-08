#include<bits/stdc++.h>

using namespace std;

int main(){
	char c;
	int n;
	vector<pair<int,char> >v;
	for(int i=0;i<3;i++){
		cin>>n>>c;
		v.push_back(make_pair(n,c));
	}
	sort(v.begin(),v.end());
	if(v[0].second==v[1].second && v[1].second==v[2].second){//sva slova jednaka
		if(v[0].first==v[1].first && v[1].first==v[2].first){
			return cout<<0,0;
		}
		if(v[0].first==v[1].first-1 && v[1].first+1==v[2].first){
			return cout<<0,0;
		}
		if(v[0].first+1==v[1].first or v[1].first+1==v[2].first){
			return cout<<1,0;
		}
		if(v[0].first==v[1].first-2 or v[1].first==v[2].first-2){
			return cout<<1,0;
		}
		if(v[0].first==v[1].first or v[1].first==v[2].first){
			return cout<<1,0;
		}
	}
	else if(v[0].second==v[1].second or v[1].second==v[2].second or v[0].second==v[2].second){//2 slova jednaka
		if(v[0].second==v[1].second){
			if(v[0].first==v[1].first or v[0].first==v[1].first-1 or v[0].first==v[1].first-2){
				return cout<<1,0;
			}
		}
		if(v[0].second==v[2].second){
			if(v[0].first==v[2].first or v[0].first==v[2].first-1 or v[0].first==v[2].first-2){
				return cout<<1,0;
			}
		}
		if(v[1].second==v[2].second){
			if(v[1].first==v[2].first or v[1].first==v[2].first-1 or v[1].first==v[2].first-2){
				return cout<<1,0;
			}
		}
	}
	return cout<<2,0;
	return 0;
}
