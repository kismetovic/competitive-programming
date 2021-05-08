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
    int n,yes=0;
    vector<string> v;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>s;
    	if(yes==1) goto nema;
    	if(s[0]=='O' && s[1]=='O'){
    		yes=1;
    		s[0]='+';
    		s[1]='+';
		}
		else if(s[3]=='O' && s[4]=='O'){
			yes=1;
    		s[3]='+';
    		s[4]='+';
		}
		nema:
    	v.push_back(s);
	}
	if(yes==1){
		cout<<"YES"<<endl;
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<endl;
		}
	}
	else cout<<"NO"<<endl;
	return 0;
}
