#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int jest=1;
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		for(int i=0;i<s.length()-1;i++){
			if((int)s[i]!=((int)s[i+1]-1)){
				cout<<"No"<<endl;
				jest=0;
				break;
			}
		}
		if(jest==1) cout<<"Yes"<<endl;
	}
	return 0;
}
