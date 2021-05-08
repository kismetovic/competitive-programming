#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,rez=0;
	cin>>n;
	for(int i=n;;i++){
		int temp=i;
		while(temp>0){
			rez+=temp%10;
			temp/=10;
		}
		if(rez%4==0) return cout<<i,0;
		rez=0;
	}
	return 0;
}
