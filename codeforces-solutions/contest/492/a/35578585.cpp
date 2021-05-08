#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,rez=0;
	cin>>n;
	for(int i=1;i<10000;i++){
		rez+=i;
		if(n<rez) return cout<<i-1,0;
		n-=rez;
	}
	return 0;
}
