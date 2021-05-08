#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b, c, d;
	//	bool jest = false;
		cin >> n >> a >> b >> c >> d;
	//	if (b == 0 || d == 0) {
	//		if (n * a == c) {
	//			cout << "Yes" << endl;
	//		}
	//		else
	//			cout << "No" << endl;
	//		continue;
	//	}
		if (n * (a - b) <= (c + d)) {
			if (n * (a + b) >= (c - d))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		else {
			cout << "No"  << endl;
		}
	//	for (int i = (a - b); i <= (a + b); i++) {
		//	if ((n * i) >= (c - d) && (n * i) <= (c + d)) {
		//		cout << i << endl;
			//	cout << "Yes" << endl;
				//jest = true;
			//	break;
			//}
		//}
		//if (!jest) {
		//	cout << "No" << endl;
		//}
	}
	return 0;
}
