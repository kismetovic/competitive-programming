#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,a[100];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
	//	cout<<a[i];
		if(k%a[i]==0){
		return	cout<<k/a[i] ,0;
		}
	}
	return 0;
}
