#include<bits/stdc++.h>

using namespace std;

vector<pair<char,int> > x;
vector<pair<char,int> > y;

void pretvori1(string a){
	int temp=0;
	for(int i=0;i<a.length();i++){
		if(i==0){
			x.push_back(make_pair(a[i],1));
			continue;
		}
		if(a[i]==a[i-1]){
			x[temp].second++;
		}
		else{
			temp++;
			x.push_back(make_pair(a[i],0));
			x[temp].second++;
		}
	}
}

void pretvori2(string b){
	int temp=0;
	for(int i=0;i<b.length();i++){
		if(i==0){
			y.push_back(make_pair(b[i],1));
			continue;
		}
		if(b[i]==b[i-1]){
			y[temp].second++;
		}
		else{
			temp++;
			y.push_back(make_pair(b[i],0));
			y[temp].second++;
		}
	}
}

bool provjeri(string a,string b){
	if(x.size()!=y.size()) return false;
	for(int i=0;i<x.size();i++){
		if(x[i].first!=y[i].first) return false;
		if(x[i].first==y[i].first && x[i].second>y[i].second) return false;
	}
	return true;
}


int main(){
	int n;
	string a;
	string b;
	cin>>n;
	for(int i=0;i<n;i++){
		x.clear();
		y.clear();
		cin>>a;
		cin>>b;
		pretvori1(a);
		pretvori2(b);
		//cout<<x.size()<<"..."<<y.size()<<endl;
		if(provjeri(a,b)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
//	for(int i=0;i<x.size();i++){
//		cout<<x[i].first<<x[i].second<<endl;
//	}
//	cout<<endl;
//	for(int i=0;i<y.size();i++){
//		cout<<y[i].first<<y[i].second<<endl;
//	}
	
	
	return 0;
}
