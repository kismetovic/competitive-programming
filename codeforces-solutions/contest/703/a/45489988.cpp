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
    int n,x,y,mishka=0,chris=0;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>x>>y;
    	if(x>y) mishka++;
    	else if(y>x) chris++;
	}
	if(mishka>chris) return cout<<"Mishka",0;
	else if(chris>mishka) return cout<<"Chris",0;
	else if(mishka==chris) return cout<<"Friendship is magic!^^",0;
	return 0;
}
