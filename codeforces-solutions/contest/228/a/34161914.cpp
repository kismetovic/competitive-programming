#include <bits/stdc++.h>

using namespace std;

int main(){
	int rezultat=0,s[4];
	cin>>s[0]>>s[1]>>s[2]>>s[3];
	if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3]) return cout<<"3" ,0;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<4;j++){
			if(s[i]==s[j]) rezultat++;
		}
	}
	if(rezultat>=3) return cout<<rezultat-1,0;
	else cout<<rezultat;
	return 0;
}
