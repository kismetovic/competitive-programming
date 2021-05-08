#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,rez=0,a[1001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i-1]==1 && a[i+1]==1 && a[i]==0){
			if(a[i+2]==0 && a[i+3]==1){
				rez++;
				i+=3;
			}
			else rez++;
		}
	}
	cout<<rez;
	return 0;
}
