#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, x, rez = 0, visak = 0;
		vector<long long> v;
		cin >> n >> x;
		for (int i = 0 ; i < n; i++) {
			int a;
			cin >> a;
			if (a >= x) {
				rez++;
				visak += a - x;
			}
			else {
				v.push_back(a);
			}
		}
		if (visak > 0) {
		sort(v.begin(), v.end());
		for (int i = v.size() - 1; i >= 0; i--) {
			if (v[i] + visak >= x) {
				rez++;
				visak -= x - v[i];
				if (visak <= 0)
					break;
			}
		}
		}
		cout << rez << endl;
	}
	return 0;
}
