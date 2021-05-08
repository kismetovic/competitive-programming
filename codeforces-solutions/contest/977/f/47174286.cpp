/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,a;
	vector<int> v;
	cin>>n;
	int arr[n+5];
	map<int,int> dp;
	map<int,int> pretho;
	map<int,int> sad;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		int x=arr[i];
		if(!dp[x]){
			dp[x]=1;
			pretho[i]=-1;
			sad[x]=i;
		}
		if(dp[x-1]+1>dp[x]){
			dp[x]=dp[x-1]+1;
			sad[x]=i;
			pretho[i]=sad[x-1];
		}
	}
	int ans=0;
	int which=arr[0];
	for(auto it : dp){
		if(it.second>ans){
			ans=it.second;
			which=it.first;
		}
	}
	for(int p=sad[which]; p!=-1; p=pretho[p]){
		v.push_back(p+1);
	}
	reverse(v.begin(),v.end());
	cout<<v.size()<<endl;
	for(int x:v) cout<<x<<" ";
	return 0;
}