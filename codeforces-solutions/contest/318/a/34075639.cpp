#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n,k;
	cin >> n >> k;
	n=(n+1)/2;
	if(k<=n) 
	return cout<<2*k-1, 0;
	k-=n;
	cout<<2*k;
	
	return 0;
}