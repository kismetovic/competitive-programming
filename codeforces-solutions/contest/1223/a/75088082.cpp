#include <bits/stdc++.h>

using namespace std;

int main() {
	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;
		if (n <= 2) {
			cout << 2 + (n % 2) << endl;
		}
		else {
			if (n % 2 == 0)
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}
	}
	return 0;
}
