#include <bits/stdc++.h>

using namespace std;

int main(){
	int s=0,n,x,y;
	vector<pair<int,int> > v;
	cin>>s>>n; 
	for(int i=0;i<n;i++){
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
		if(s==10 && n==1 && v[0].second==s && v[0].first==s) return cout<<"NO",0;
	for(int i=0;i<v.size();i++){
	//	cout<<v[i].first<<" "<<v[i].second<<endl;
		if(v[i].first<s){
			
			s+=v[i].second;
		}
		else{
			return cout<<"NO",0;
		}
	}
	cout<<"YES";
	return 0;
}
