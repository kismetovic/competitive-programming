#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 0; 
	cin >> n;
	int a,b; 
	
	bitset<101> bs;

	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		int temp; cin >> temp;
		bs.set(temp-1);
	}
	cin >> b;
	for (int i = 0; i < b; ++i)
	{
		int temp; cin >> temp;
		bs.set(temp-1);
	}

	if(bs.count() == n) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";
	
	return 0;
}