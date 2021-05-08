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
    int n,a;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a;
    	if(a%2==0){
    		a--;
    		v.push_back(a);
		}
    	else v.push_back(a);
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
