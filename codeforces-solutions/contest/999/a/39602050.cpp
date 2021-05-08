#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,sum=0;
	int a[100];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
	for(int i=0;i<n;i++){
		if(a[i]>k){
			goto drugikraj;
			break;
		}
		else{
			a[i]=10000;
			sum++;
		}
	}
	drugikraj:
		for(int i=n-1;i>=0;i--){
			if(a[i]>k){
				break;
			}
			else {
				a[i]=10000;
				sum++;
			}
		}
	cout<<sum;
	return 0;
}
