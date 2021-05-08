/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,a;
	vector<long long> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	//cout<<endl;
	for(int i=0;i<v.size();i++){
		if(i==0){
			cout<<abs(v[i]-v[i+1])<<" "<<abs(v[n-1]-v[i])<<endl;
		}	
		else if(i==n-1){
			cout<<abs(v[i-1]-v[i])<<" "<<abs(v[0]-v[i])<<endl;
		}
		else{
			cout<<min(abs(v[i+1]-v[i]),abs(v[i-1]-v[i]))<<" "<<max(abs(v[0]-v[i]),abs(v[n-1]-v[i]))<<endl;
		}	
	}
	return 0;
}
