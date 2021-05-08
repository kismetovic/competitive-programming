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
    int n,niz[5]={0};
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>s;
    	if(s=="Tetrahedron"){
    		niz[0]++;
		}
		if(s=="Cube"){
    		niz[1]++;
		}
		if(s=="Octahedron"){
    		niz[2]++;
		}
		if(s=="Dodecahedron"){
    		niz[3]++;
		}
		if(s=="Icosahedron"){
    		niz[4]++;
		}
	}
	int rez;
	rez=niz[0]*4+(niz[1]*6)+(niz[2]*8)+(niz[3]*12)+(niz[4]*20);
	cout<<rez;
	return 0;
}
