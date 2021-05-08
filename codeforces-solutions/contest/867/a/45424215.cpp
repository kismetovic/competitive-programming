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
    int n,yes=0,no=0;
    string s;
    cin>>n>>s;
    for(int i=1;i<n;i++){
    	if(s[i]=='F' && s[i-1]=='S'){
    		yes++;
		}
		if(s[i]=='S' && s[i-1]=='F'){
			no++;
		}
	}
	if(yes>no) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
