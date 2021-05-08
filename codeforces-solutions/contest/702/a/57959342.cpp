#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	vector<long long> v;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int maks=1,broji=1;
	for(int i=1;i<v.size();i++){
		if(v[i]>v[i-1]) broji++;
		else{
			maks=max(maks,broji);
			broji=1;
		}
		maks=max(maks,broji);
	}
	cout<<maks;
	return 0;
}