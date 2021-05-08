#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,rezultat=0;
	cin>>n;
	for(int i=4;i<n;i++){
		rezultat=n-i;
		if(rezultat%2==0 && i%2==0 or rezultat%2==0 && i%3==0 or rezultat%3==0 && i%2==0 or rezultat%3==0 && i%3==0)
		return cout<<i<<" "<<rezultat ,0;
		else{
			rezultat=0;
			continue;
		}	
		
	}
	return 0;
}
