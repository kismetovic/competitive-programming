#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int bottom[101];
		int left[101];
		for (int i = 0; i < n; i++) {
			cin >> bottom[i];
		}
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			cin >> left[i];
			for (int j = 0; j < n; j++) {
				if (left[i] == bottom[j]) {
					cnt++;
					break;
				}
			}
		}
		cout << cnt << endl;
		
	}
	return 0;
}