#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==1) v1.push_back(i+1);
		else if(a==2) v2.push_back(i+1);
		else if(a==3) v3.push_back(i+1);
	}
	cout<<min(v1.size(),min(v2.size(),v3.size()))<<endl;
	for(int i=0;i<min(v1.size(),min(v2.size(),v3.size()));i++){
		cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
	}
	return 0;
}