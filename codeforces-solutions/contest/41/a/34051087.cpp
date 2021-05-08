#include <bits/stdc++.h>

using namespace std;

int main(){
	int yes=0,c;
	string a,b;
	getline(cin,a);
	getline(cin,b);
	c=b.length()-1;
	//cout<<c<<endl;
	for(int i=0;i<a.length();i++){
		int j;

		j=c;
		
	//	cout<<i<<j<<endl;
	//	cout<<a[i];
	//	cout<<b[c];
	//	cout<<endl;
		if(a[i]==b[j--]){
			yes=1;
			c--;
		}
		else{
			yes=0;
			break;
		}
	}
	if(yes==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
