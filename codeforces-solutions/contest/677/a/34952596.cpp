#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,h,a[1000],rez=0;
	cin>>n>>h;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>h) rez+=2;
		else if(a[i]<=h) rez++;
	}
	cout<<rez;
	return 0;
}