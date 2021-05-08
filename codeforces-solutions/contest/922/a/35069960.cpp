#include <bits/stdc++.h>

using namespace std;

int main () {
	int x,y;
	cin >> x >> y;
	if (y > x+1 || !y || (x > 0 && y == 1) || ((y-1+x)&1)) {
		puts("No");
		return 0;
	}
	puts("Yes");
}