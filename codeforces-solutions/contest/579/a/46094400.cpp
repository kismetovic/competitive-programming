/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
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
	int n,rez=0;
	vector<int> v;
	cin>>n;
	while(n>0){
		if(n%2==0){
			n/=2;
			v.push_back(0);
		}
		else{
			n/=2;
			v.push_back(1);		
		}	
	}
	for(int i=v.size()-1;i>=0;i--){
		if(v[i]==1) rez++;
	}
	cout<<rez;
	return 0;
	
}
