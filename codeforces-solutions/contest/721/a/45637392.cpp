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
    int n;
    vector<int> v;
    string s;
    cin>>n;
    cin.clear();
    cin>>s;
    for(int i=0;i<n;i++){
    	int cnt=1;
    	if(s[i]=='B'){
    		for(int j=i+1;j<n;j++){
    			if(s[j]=='B'){
    				cnt++;
				}
				else break;
			}
			v.push_back(cnt);
		}
		i+=cnt-1;
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
