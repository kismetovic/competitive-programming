/*
ID: ADNAN KISMETOVIC
USER:kismetovic 
LANG: C++
JUDGE:CODEFORCES.COM
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n,a,sum=0,rez=1,sum1=0;
    cin>>n;
    for(int i=0;i<n;i++){
    	for(int j=0;j<4;j++){
    		cin>>a;
    		sum+=a;
    	}
    	if(i==0) sum1=sum;
		if(sum>sum1) rez++;
   		sum=0;
	}
	cout<<rez;
	return 0;
}
