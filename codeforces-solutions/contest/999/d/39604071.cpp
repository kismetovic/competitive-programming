#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[200005],n,c[200005];
set<int> s;
signed main()
{
	int m,ans=0;
	cin>>n>>m;
	for(int i=0;i<m;c[i++]=n/m) s.insert(i);
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		int x=a[i];
		a[i]%=m;
		int val;
		if(a[i]>*s.rbegin()) val = *s.begin();
		else val = *s.lower_bound(a[i]);
		if(!--c[val]) s.erase(val);
		ans+=(val-a[i]+m)%m;
		a[i]=x+(val-a[i]+m)%m;
	}
	cout<<ans<<endl;
	for(int i=0;i<n;i++) cout<<a[i]<<' ';
}