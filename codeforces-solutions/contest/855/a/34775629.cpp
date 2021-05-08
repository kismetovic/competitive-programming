#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<string> v;
	string a;
	int n;
	cin>>n;
	if(n==1 or n==0) return cout<<"NO",0;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		//	if(j==i) continue;
			if(v[i]==v[j] && j<i){
				cout<<"YES"<<endl;
				break;
			}
			else if(j>=i){
				cout<<"NO"<<endl;
				break;
			} 
		}
	}
	return 0;
}
