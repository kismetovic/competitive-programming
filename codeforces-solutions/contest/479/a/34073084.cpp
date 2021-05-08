#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,d[4],rezultat1,rezultat2,rezultat3,rezultat4,max=0;
	cin>>a;
	cin>>b;
	cin>>c;
	rezultat1=a+b+c;
	d[0]=rezultat1;
	rezultat2=(a+b)*c;
	d[1]=rezultat2;
	rezultat3=a*(b+c);
	d[2]=rezultat3;
	rezultat4=a*b*c;
	d[3]=rezultat4;
	for(int i=0;i<4;i++){
		if(d[i]>max)
		max=d[i];
	}
	cout<<max;
	return 0;
}
