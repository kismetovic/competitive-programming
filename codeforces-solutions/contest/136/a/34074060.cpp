#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],res[n];
for(int i=1;i<=n;i++){
cin>>a[i];
int t=a[i];
res[t]=i;
}
for(int j=1;j<=n;j++){
	cout<<res[j]<<" ";
}
return 0;
}