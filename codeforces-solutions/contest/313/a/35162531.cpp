#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int prvi,drugi;
	cin>>n;
	
	if(n>0) return cout<<n,0;
	
	prvi=n/10;
	drugi=n/100*10+n%10; 

	cout<<max(prvi,drugi);

	return 0;
}
