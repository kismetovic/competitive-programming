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
    int n,matrica[11][11];
    cin>>n;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(i==0 or j==0){
    			matrica[i][j]=1;
			}
			else{
				matrica[i][j]=matrica[i-1][j]+matrica[i][j-1];
			}
		}
	}
	cout<<matrica[n-1][n-1];
	return 0;
}
