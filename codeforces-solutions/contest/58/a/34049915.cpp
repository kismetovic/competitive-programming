#include<iostream>

using namespace std;

int main(){
	string x,l="hello";
	cin>>x;
	int j=0;
	for(int i=0;i<x.size();i++){
		if(x[i]==l[j])j++;
}
if(j>=5)cout<<"YES";
else cout<<"NO";

return 0;
}
