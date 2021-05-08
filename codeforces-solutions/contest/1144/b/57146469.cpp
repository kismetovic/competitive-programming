#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	vector<int> v1;
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		sum+=a;
		if(a%2==0)
			v.push_back(a);
		else
			v1.push_back(a);
	}
	sort(v.rbegin(),v.rend());
	sort(v1.rbegin(),v1.rend());
	int mini=min(v1.size(),v.size());
	sum-=accumulate(v.begin(),v.begin()+mini,0);
	sum-=accumulate(v1.begin(),v1.begin()+mini,0);
	
	if(int(v1.size())>mini){
		sum-=v1[mini];
	}
	if(int(v.size())>mini){
		sum-=v[mini];
	}
	cout<<sum;
	return 0;
}
