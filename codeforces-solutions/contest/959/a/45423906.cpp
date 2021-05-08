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
    int n,winner=0;
    cin>>n;
    while(n>0){
    	if(n%2==0){
    		n-=n;
    		winner=1;
		}
		else{
			n-=(n-1);
		}
		if(n==1){
			winner=0;
			break;
		}
	}
	if(winner==1) return cout<<"Mahmoud",0;
	else cout<<"Ehab"<<endl;
	return 0;
}
