#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, m, k, l;
 	cin >> n >> m >> k >> l;
 	k += l;
  	long long need = (k % m == 0 ? k / m : k / m + 1);
  	if (need * m > n) {
    cout << -1 << endl;
    return 0;
  	}
  	cout << need << endl;
  return 0;
}
