/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,rez=0;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=1;i<v.size();i+=2){
	//	cout<<v[i]<<" "<<v[i-1]<<endl;
		rez+=v[i]-v[i-1];
	}
	cout<<rez;
	return 0;
}
