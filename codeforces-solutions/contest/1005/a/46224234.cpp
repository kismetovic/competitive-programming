/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a[1001],rez=0,steps=1;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]!=1) continue;
		for(int j=i+1;j<n;j++){
			if(a[j]==1){
				break;
			}
			else{
				steps++;
			}
		}
		v.push_back(steps);
		steps=1;
		rez++;
	}
	cout<<rez<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
    return 0; 
}
