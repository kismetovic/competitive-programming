#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x, n, m;
		cin >> x >> n >> m;
		int rez1 = m * 10;
		if (x < 20 && m == 0) {
			cout << "NO" << endl;
			continue;
		}
		else if (x < 20 && m > 0) {
			x -= rez1;
			if (x <= 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else {
			while (n > 0) {
				x = (x / 2) + 10;
				if ((x / 2) + 10 > x) {
					break;
				}
				n--;
			}
			x -= rez1;
			if (x <= 0) {
				cout << "YES" << endl;
			}
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
