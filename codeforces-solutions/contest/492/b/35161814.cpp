#include <bits/stdc++.h>

using namespace std;

int  main(){
	int n, l;
	cin >> n >> l;
	double *a = new double[n];
	
	for (int i = 0; i < n; i++){
	cin >> a[i];
	}
	
	sort(a, a + n);
	double more=0, first, end;
	first = a[0] - 0, end = l - a[n - 1];
	for (int i = 0; i < n - 1; i++){
		more = max(more, (a[i + 1] - a[i]) / 2);
	}
	
	double max1 = max(more, first);
	cout <<setprecision(10)<< max(max1, end);
	return 0;
}
