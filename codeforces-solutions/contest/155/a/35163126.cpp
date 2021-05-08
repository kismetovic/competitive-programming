#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int n,a[1003],max=-1,min=1000002;
	long rez=0;
	cin>>n;
	for(int i=0;i<n;i++){
  	  cin>>a[i];  
    }
  	max=a[0];min=a[0];
  	for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            rez++;
    	}
      	if(a[i]<min){
            min=a[i];
            rez++;
      }
  }
	cout<<rez;
  
	return 0;
}
