#include <bits/stdc++.h>

using namespace std;

int main(){
	int rezultat=0;
	string a;
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		if(a[i]=='a' or a[i]=='e' or a[i]=='o' or a[i]=='i' or a[i]=='u' or a[i]=='1' or a[i]=='3' or a[i]=='5' or a[i]=='7' or a[i]=='9')
		rezultat++;
	}
	cout<<rezultat;
	return 0;
}
