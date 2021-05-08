#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n;
		cin >> s;
		bool jest = false;
		for (int i = 0; i < n - 1; i++) {
			if (s[i] == s[i + 1]) {
				s.erase(s.begin() + i);
				n--;
				i--;
			}
		}
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < s.length(); j++) {
				if (i == j)
					continue;
				if (s[i] == s[j]) {
					jest = true;
					break;
				}
			}
			if (jest)
				break;
		}
		if (jest) {
			cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;
	}
	return 0;
}