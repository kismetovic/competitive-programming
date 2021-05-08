#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		long long n,k,a,b;
		cin>>k>>n>>a>>b;
		long long c;
		c=k-(n*a);
		if(c>0) cout<<n<<endl;
		else{
			c=-c;
			c++;
			long long temp;
			temp=a-b;
			long long rez;
			rez=(c+temp-1)/temp;
			if(rez>n) cout<<"-1"<<endl;
			else cout<<n-rez<<endl;
			
		}
	}
	return 0;
}
