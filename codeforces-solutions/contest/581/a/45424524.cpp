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
    int a,b,rez1=0,rez2=0;
    cin>>a>>b;
    while((a>=1 && b>=1) or (a>=2 && b==0) or (a==0 && b>=2)){
    	if(a>=1 && b>=1){
    		rez1++;
    		a--;
    		b--;
		}
		else if(a>1 && b==0){
			a-=2;
			rez2++;
		}
		else if(a==0 && b>1){
			b-=2;
			rez2++;
		}
	}
	cout<<rez1<<" "<<rez2<<endl;
	return 0;
}
