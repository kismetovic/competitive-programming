#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string hate="hate";
	string love="love";
	string I="I";
	string it="it";
	string that="that";
	string temp="";
	temp=hate;
	cin>>n;
	for(int i=1;i<=n;i++){

		cout<<I<<" "<<temp<<" ";
		if(i==n){
			cout<<it;
			break;
		}
		else{
			cout<<that<<" ";
		}
		if(temp==hate){
			temp=love;
		}
		else if(temp==love){
			temp=hate;
		}
	}
	return 0;
}
