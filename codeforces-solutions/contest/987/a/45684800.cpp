/*
ID: ADNAN KISMETOVIC
USER:kismetovic 
LANG: C++
JUDGE:CODEFORCES.COM
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n,rez=0,niz[6]={0};
    string s;
    string a[6]={"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>s;
    	if(s=="purple") niz[0]=1;
    	if(s=="green") niz[1]=1;
    	if(s=="blue") niz[2]=1;
    	if(s=="orange") niz[3]=1;
    	if(s=="red") niz[4]=1;
    	if(s=="yellow") niz[5]=1;
	}
	for(int i=0;i<6;i++){
		if(niz[i]==0){
			rez++;
		}
	}
	cout<<rez<<endl;
	for(int i=0;i<6;i++){
		if(niz[i]==0){
			cout<<a[i]<<endl;
		}
	}
	return 0;
}
