#include <bits/stdc++.h>

using namespace std;

int main(){
	int l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		int temp=i;
		vector<int> v;
		while(temp>0){
			int rez=temp%10;
			v.push_back(rez);
			temp/=10;
		}
		int nije=0;
		sort(v.begin(),v.end());
		for(int j=0;j<v.size()-1;j++){
			if(v[j]==v[j+1]){
				nije=1;
				break;
			}
		}
		if(nije==0) return cout<<i,0;
	}
	cout<<"-1";
	return 0;
}