#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,prvi=0,drugi=1,treci=0,sum=1;
	cin>>k;
	for(int i=1;i<k;i++){
		treci=prvi+drugi;
		prvi=drugi;
		drugi=treci;
		sum+=treci;
	//	cout<<treci<<endl;
	}
	cout<<sum;
	return 0;
}
