#include<bits/stdc++.h>

using namespace std;

const int N = 200 * 1000 + 555;
int n, k, a[N];

inline bool read() {
	if(!(cin >> n >> k))
		return false;
	for(int i = 0; i < n; i++)
		assert(scanf("%d", &a[i]) == 1);
	return true;
}

inline void solve() {
	sort(a, a + n);
	a[n++] = int(2e9);
	
	int ans = 0, u = 0;
	for(int i = 0; i < n - 1; i++) {
		while(u < n && a[i] == a[u])
			u++;
		if(a[u] - a[i] > k)
			ans++;
	}
	cout << ans << endl;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif

	if(read()) {
		solve();
#ifdef _DEBUG
		cerr << "TIME = " << clock() - tt << endl;
#endif
	}
	return 0;
}
