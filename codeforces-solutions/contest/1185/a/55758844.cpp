#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[3],d,rez=0;
	cin>>a[0]>>a[1]>>a[2]>>d;
	sort(a,a+3);
	if(abs(a[0]-a[1])<d) rez+=d-abs(a[1]-a[0]);
	if(abs(a[2]-a[1])<d) rez+=d-abs(a[2]-a[1]);
	cout<<rez;
	return 0;
}
