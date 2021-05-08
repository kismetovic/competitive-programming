#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <memory.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int,string > > x(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i].second;
		x[i].first = x[i].second.size();
	}
	sort(x.begin(), x.end());
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (x[j].second.find(x[i].second) == string::npos)
			{
				flag = true;
				break;
			}
		}
		if (flag) break;
	}
	if (flag)
		cout << "NO";
	else
	{
	    cout << "YES\n";
		for (int i = 0; i < n; i++)
			cout << x[i].second << endl;
	}
	return 0;
}
