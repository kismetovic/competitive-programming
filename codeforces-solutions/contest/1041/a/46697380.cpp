/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,a,rez=0;
	vector<long long> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
//	for(int i=0;i<n;i++) cout<<v[i]<<" ";
	//cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(v[j-1]+1==v[j]){
				continue;
			}
		//	cout<<v[j-1]<<" "<<v[j]<<endl;
			rez+=v[j]-v[j-1]-1;
		}
		return cout<<rez,0;
	}
	return 0;
}
