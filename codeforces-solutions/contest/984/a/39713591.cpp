#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[100000];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	n=(n-1)/2+1;
	cout<<a[n];
	return 0;
}
