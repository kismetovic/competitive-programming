#include <bits/stdc++.h>

using namespace std;

int main(){
	int m=0;
	string a;
	getline(cin,a);
	while(a.find("WUB")+1){
		a.replace(a.find("WUB"),3," ");
	}
	cout<<a;
	return 0;
}
