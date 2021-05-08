/*
ID: ADNAN KISMETOVIC
USER:kismetovic 
LANG: C++
JUDGE:CODEFORCES.COM
*/

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <climits>
#include <iomanip>
#include <bitset>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n,m,x,y,pripada=0;
    vector<pair<int,int> > v;
    vector<int> v1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>x>>y;
    	v.push_back(make_pair(x,y));
	}
	for(int i=1;i<=m;i++){
		for(int j=0;j<v.size();j++){
			if(i>=v[j].first && i<=v[j].second){
				pripada=1;
				break;
			}
		}
		if(pripada==0){
			v1.push_back(i);
		}
		pripada=0;
	}
	cout<<v1.size()<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	return 0;
}
