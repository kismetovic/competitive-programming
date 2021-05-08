#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m[100000],pocetak=0,rezultat=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	pocetak=m[0];
	for(int i=0;i<n;i++){
		if(m[i]==pocetak)
		continue;
		else{
			pocetak=m[i];
			rezultat++;
		}
	}
	cout<<rezultat;
	
	return 0;
}
