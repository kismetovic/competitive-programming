#include <bits/stdc++.h>

using namespace std;

string h;
bool a[11];
int mini=10101;

void rek(int d)
{
	if (d==h.size())
	{
		int x=0,op=h.size();
		for (int i=0;i<h.size();++i)
		{
			if (x==0 && a[i] && h[i]=='0') return;
			if (a[i])
			{
				x*=10;
				x+=h[i]-'0';
				--op;
			}
		}
		if (round(sqrt(x))*round(sqrt(x))==x) mini=min(mini,op);
	}
	else
	{
		a[d]=0;
		rek(d+1);
		a[d]=1;
		rek(d+1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>h;
	rek(0);
	if (mini==h.size()) cout<<-1<<endl;
	else cout<<mini<<endl;
}
