#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a[100];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<i;j++){
			if(a[j]>a[i]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
