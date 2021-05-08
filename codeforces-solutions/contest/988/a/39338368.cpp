#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,a,jeste=0;
	vector<pair<int,int> > v;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a;
		if(i==0){
			v.push_back(make_pair(a,i));
			continue;
		}
		for(int j=0;j<v.size();j++){
			if(a==v[j].first){	
				jeste=1;
				break;
			}
		}
		if(jeste==1){
			jeste=0;
			continue;
		}
		else v.push_back(make_pair(a,i));
	}
	if(v.size()>=k){
		cout<<"YES"<<endl;
		for(int i=0;i<k;i++){
			cout<<v[i].second+1<<" ";
		}
	}
	else cout<<"NO";
	return 0;
}