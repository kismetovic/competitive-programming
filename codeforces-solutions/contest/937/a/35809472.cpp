#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a[10000],rez=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<=i;j++){
            for(int k=0;k<=i;k++){
            	if(k==j) continue;
            	else if(a[k]==a[j]) a[k]=0;
			}
        }
    }
  	for(int i=0;i<n;i++){
  		if(a[i]==0) continue;
  		else rez++;
	  }
    cout<<rez;
    return 0;
}
