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
    int n,rez=0,x,max=0;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>x;
    	if(x>max){
    		max=x;
		}
    	v.push_back(x);
	}
	for(int i=0;i<n;i++){
		if(v[i]==max) continue;
		else if(v[i]<max){
			rez+=(max-v[i]);
		}
	}
	cout<<rez<<endl;
	return 0;
}
