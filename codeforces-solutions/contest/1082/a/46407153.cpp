#include <bits/stdc++.h>

using namespace std;

const int INF = int(2e9) + 99;

int n, x, y, d;

int dist(int x, int y){
	return (abs(x - y) + (d - 1)) / d;
}

int main() {
	
	int t;
	cin >> t;
	for(int i = 0; i < t; ++i){
    	cin >> n >> x >> y >> d;
    	
    	int len = abs(x - y);
    	int res = INF;
    	
    	if(len % d == 0) 
    		res = min(res, dist(x, y));
    	
    	len = y - 1;
    	if(len % d == 0)
    		res = min(res, dist(x, 1) + dist(1, y));
    	
    	len = n - y;
    	if(len % d == 0)
    		res = min(res, dist(x, n) + dist(n, y));
    		
    	if(res == INF)
    		res = -1;
    	
    	cout << res << endl;
	}
	
	return 0;
}