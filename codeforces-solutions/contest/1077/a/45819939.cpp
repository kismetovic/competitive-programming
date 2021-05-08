#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,position=0,a,b,k;
	vector<long long> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>k;
		if(k%2==0){
			position=a*(k/2)-(b*(k/2));
		}
		else{
		//	cout<<"------"<<k-(k/2)<<endl;
			position=a*(k-(k/2))-(b*(k/2));
		}
		v.push_back(position);
		position=0;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
