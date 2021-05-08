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
    long long s,v1,v2,t1,t2,rez1,rez2;
    cin>>s>>v1>>v2>>t1>>t2;
    rez1=2*t1+(s*v1);
    rez2=2*t2+(s*v2);
    if(rez1>rez2) return cout<<"Second",0;
    else if(rez1<rez2) return cout<<"First",0;
    else return cout<<"Friendship",0;
	return 0;
}
