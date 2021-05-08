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
    int w,h,k,sum=0;
    cin>>w>>h>>k;
    for(int i=1;i<=k;i++){
    	sum+=2*((w-4*(i-1))+(h-4*(i-1)))-4;
	}
	cout<<abs(sum);
	return 0;
}
