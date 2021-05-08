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
    int n,x,y,t,sum1=0,sum2=0,sum3=0,sum4=0;
    vector<pair<int,int> > v;
    vector<pair<int,int> > v1;
	cin>>n;
    for(int i=0;i<n;i++){
    	cin>>t;
    	if(t==1){
    		cin>>x>>y;
    		v.push_back(make_pair(x,y));
		}
		else if(t==2){
			cin>>x>>y;
			v1.push_back(make_pair(x,y));
		}
	}
	if(v.size()>0){
		for(int i=0;i<v.size();i++){
			sum1+=v[i].first;
			sum2+=v[i].second;
		}
		if(sum1>=sum2) cout<<"LIVE"<<endl;
		else cout<<"DEAD"<<endl;
	}
	if(v1.size()>0){
		for(int i=0;i<v1.size();i++){
			sum3+=v1[i].first;
			sum4+=v1[i].second;
		} 
		if(sum3>=sum4) cout<<"LIVE"<<endl;
		else cout<<"DEAD"<<endl;
	}
	return 0;
}
