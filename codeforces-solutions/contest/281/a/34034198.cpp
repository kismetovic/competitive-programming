#include <bits/stdc++.h>

using namespace std;

int main(){
	string name;
	getline(cin,name);
	if(islower(name[0]))
		name[0]=toupper(name[0]);
	cout<<name;
	return 0;
}
