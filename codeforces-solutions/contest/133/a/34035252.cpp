#include <bits/stdc++.h>

using namespace std;

int main(){
	int a=0;
	string com;
	getline(cin,com);
	for(int i=0;i<com.length();i++){
		if(com[i]=='H'){
			a=1;
			cout<<"YES";
			break;
		}
		else if(com[i]=='Q'){
			a=1;
			cout<<"YES";
			break;
		}
		else if(com[i]=='9')
		{
			a=1;
			cout<<"YES";
			break;
		}
	
	}
	if(a==0) cout<<"NO";
	return 0;
}
