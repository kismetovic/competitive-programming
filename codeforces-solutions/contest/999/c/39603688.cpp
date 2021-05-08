#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,a=97;
	char s[1000000];
	cin>>n>>k;
	cin>>s;
	while(k>0){
		for(int i=0;i<n;i++){
			if(s[i]==(char)a){
				s[i]='#';
				k--;
				if(k==0) break;
				continue;
			}
		}
		if(k==0) break;
		a++;
	}
	for(int i=0;i<n;i++){
		if(s[i]=='#') continue;
		else cout<<s[i];
	}
	return 0;
}
