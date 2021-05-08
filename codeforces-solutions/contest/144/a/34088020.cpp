#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, y;
    cin>>n;
    int a[n];
    x=0;
    y=0;
    for(i=0;i<n;i++){ 
	cin>>a[i];
    if(a[i]>a[x]) x=i;
    if(a[i]<=a[y]) y=i; 
	}
    cout<<(n-y-1+x-(y<x));
    
    return 0;
}
