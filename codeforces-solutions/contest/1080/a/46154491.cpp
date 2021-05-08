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
	long long n,k,red,gr,bl,rez;
	cin>>n>>k;
	(n*2)%k==0?red=(n*2)/k:red=(n*2)/k+1;
	(n*5)%k==0?gr=(n*5)/k:gr=(n*5)/k+1;
	(n*8)%k==0?bl=(n*8)/k:bl=(n*8)/k+1;
	rez=red+gr+bl;
	cout<<rez;
	return 0;
}