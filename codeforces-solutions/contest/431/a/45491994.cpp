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
    int niz[5];
    long long rez=0;
    char n[100001]={0};
   	cin>>niz[0]>>niz[1]>>niz[2]>>niz[3];
	cin>>n;
	for(int i=0;i<sizeof(n);i++){
		if(n[i]=='1'){
			rez+=niz[0];
		}
		else if(n[i]=='2'){
			rez+=niz[1];
		}
		else if(n[i]=='3'){
			rez+=niz[2];
		}
		else if(n[i]=='4'){
			rez+=niz[3];
		}
	}
	cout<<rez<<endl;
	return 0;
}
