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
    int n,maks=0,a;
    vector<int> v;
    cin>>n;
  //  if(n==1) return cout<<"1",0;
    for(int i=0;i<n;i++){
    	cin>>a;
		v.push_back(a);
	}
	if(n==1) return cout<<"1",0;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		int cnt=1;
		for(int j=i+1;j<v.size();j++){
			if(v[i]==v[j]){
				cnt++;
			}
		}
		if(cnt>maks){
			maks=cnt;
			cnt=0;
		}
	}
	cout<<maks;
	return 0;
}
