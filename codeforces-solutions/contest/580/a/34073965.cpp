#include<iostream>
#include<cmath>
using namespace std;
int n,a[100005],m,c=1;
int main()
{
    cin>>n;
	for(int  i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++)
	  if(a[i]<=a[i+1])c++;
	  else {m=max(m,c);c=1;}
	  cout<<(c>m?c:m);
    return 0;
}