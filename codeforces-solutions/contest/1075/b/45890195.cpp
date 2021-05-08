#include <stdio.h>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
const int N = 100100;
int main()
{
	int n, m, i, t;
	vector<int> a,b;
	vector<int> taxi, x;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n+m; i++)
	{
		scanf("%d", &t);
		a.push_back(t);
	}
	for (i = 0; i < n+m; i++)
	{
		scanf("%d", &t);
		b.push_back(t);
	}
	for (i = 0; i < n + m; i++)
	{
		if (b[i] == 1)
			taxi.push_back(a[i]);
		else
			x.push_back(a[i]);
	}
	int le = 0;
	vector<int> ans(taxi.size(), 0);
	int txsz = taxi.size();
	int sz = x.size();
	for (i = 0; i < sz; i++)
	{
		while ((le < txsz - 2) && (x[i] >= taxi[le+1]))
		{
				le++;
		}
		if (le >= txsz - 1) // todo-check
		{
			ans[txsz-1]++;
			continue;
		}
		if (x[i] < taxi[le])
			ans[le]++;
		else if (abs(x[i] - taxi[le]) <= abs(x[i] - taxi[le + 1]))
			ans[le]++;
		else ans[le + 1]++;
		if (x[i] >= taxi[le + 1])
			le++;
	}
	for (auto& y : ans)
		printf("%d ", y);
	printf("\n");
	return 0;
}