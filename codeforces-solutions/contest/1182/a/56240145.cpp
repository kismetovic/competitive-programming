#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int rez;
	rez=pow(2,n/2);
	(n%2==0)?cout<<rez:cout<<0;
	return 0;
}
