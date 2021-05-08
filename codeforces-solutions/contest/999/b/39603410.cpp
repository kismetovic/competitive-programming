#include<bits/stdc++.h>

using namespace std;

int n;
char s[10001];

int main(){
	cin>>n>>s;
	for(int i=2;i<=n;i++)
		if(n%i==0)
			reverse(s,s+i);
	cout<<s;
	return 0;
}
