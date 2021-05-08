#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
			if(i%2==0 && i%4==0){
				cout<<"#";
				for(int k=1;k<m;k++) cout<<".";
			}
			else if(i%2==0 && i%4!=0){
				for(int h=1;h<m;h++) cout<<".";
				cout<<"#";
			}
			else{
				for(int l=1;l<=m;l++) cout<<"#";
			}
			cout<<endl;
		}
	
	return 0;
}
