#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,arr[5]={1,2,3,4,5};
	cin>>x;
	if(x==arr[0] or x==arr[1] or x==arr[2] or x==arr[3] or x==arr[4])
	cout<<"1";
	else{
		if(x%5==0) cout<<x/5;
		else cout<<(x/5)+1;
	}
	return 0;
}
