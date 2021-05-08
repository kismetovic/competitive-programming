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
    int n,cnt=0,rez=0;
    string s;
    cin>>n;
    cin>>s;
    pocetak:
    for(int i=0;i<n;i++){
    	if(s[i]=='x'){
    		cnt++;
		}
		else cnt=0;
	//	cout<<cnt<<" ";
		if(cnt>=3){
			cnt=0;
			s.erase(s.begin()+i);
			n--;
			rez++;
			goto pocetak;
		}
	//	cout<<rez<<" "<<s<<endl;
	}
	cout<<rez;
	return 0;
}
