#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,ar[1000],count1=0,sum=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		sum+=ar[i];
	}	
	sort(ar,ar+n);
	for(int i=n-1;i>=0;i--){
		sum2+=ar[i];
		count1++;
		if(sum2 > sum / 2){
		cout<<count1;
		break;
		}
	}
	return 0;
}
