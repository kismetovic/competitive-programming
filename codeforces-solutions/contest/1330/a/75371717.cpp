#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, x;
		cin >> a >> x;
		int t[101] = {0};
		for (int i = 0; i < a; i++) {
			int temp;
			cin >> temp;
			t[temp] = 1;
		}
		for (int i = 1; i <= 100; i++) {
			if (x == 0) break;
			if (t[i] == 0) {
				x--;
				t[i] = 1;
			}
		}
		int rez = 0;
		for (int i = 1; i <= 100; i++) {
			if (t[i] == 0)
				break;
			else
				rez++;
		}
		cout << rez + x<< endl;
	}
	return 0;
}
