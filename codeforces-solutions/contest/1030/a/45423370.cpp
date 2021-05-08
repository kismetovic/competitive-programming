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
    int n,niz[100],hard=0;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>niz[i];
    	if(niz[i]==1){
    		hard=1;
		}
	}
    if(hard==1) return cout<<"HARD",0;
    else cout<<"EASY"<<endl;
	return 0;
}
