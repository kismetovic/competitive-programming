#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,rez=0,time=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		time+=i*5;
		if(time+k>240){
			return cout<<rez,0;
		}
		else rez++;
	}
	cout<<rez;
	return 0;
}
