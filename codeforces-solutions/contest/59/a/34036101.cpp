#include <bits/stdc++.h>

using namespace std;

int main(){
	int upper=0,lower=0;
	string a;
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		if(islower(a[i]))
		lower++;
		else
		upper++;
	}
	if(lower<upper){
		for(int i=0;i<a.length();i++){
			if(islower(a[i]))
				a[i]=toupper(a[i]);
		}
	}
	else{
		for(int i=0;i<a.length();i++){
			if(isupper(a[i]))
				a[i]=tolower(a[i]);
		}
	}
	cout<<a;
	return 0;
}
