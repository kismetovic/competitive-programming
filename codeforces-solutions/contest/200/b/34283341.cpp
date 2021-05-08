#include <bits/stdc++.h>

using namespace std;

int main(){
	double n,p[100],maks=0,x=100;
	double sum=0;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		sum+=p[i]/100;
	}
	cout<<setprecision(13);
	cout<<(double)(sum/n)*100;
	return 0;
}
