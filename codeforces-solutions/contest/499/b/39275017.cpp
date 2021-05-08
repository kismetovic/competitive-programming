#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	string a;
	string b;
	string c;
	vector<pair<string,string> > v;
	vector<string> v1;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	for(int i=0;i<n;i++){
		cin>>c;
		for(int j=0;j<v.size();j++){
				if(c==v[j].first){
					if(c.length()<=v[j].second.size()){
						v1.push_back(c);
					}
					else v1.push_back(v[j].second);
				}
			}
		}
		
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
 	return 0;
}
