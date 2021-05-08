#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	cout << min(n * a, min(((n - 1) / m + 1) * b, n / m * b + n % m * a));
	return 0;
}