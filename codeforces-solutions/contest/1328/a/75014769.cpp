#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int rez = 0;
		if (a % b == 0) {
			cout << rez << endl;
			continue;
		}
		if (b > a) {
			rez += b - a;
		}
		else if (b < a) {
			int temp = (a / b);
			temp++;
			rez = (b * temp) - a;
		}
		cout << rez << endl;
	}
	return 0;
}
