#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,gore=0,dole=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>=0) gore+=a;
		else dole+=a;
	}
	cout<<gore-dole;
	return 0;
}
