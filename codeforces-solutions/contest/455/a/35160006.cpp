#include <iostream>
using namespace std;
long long n, t, v[100009];
int main() {
cin >> n;
for (int i=0;i<n;i++) {cin>>t;++v[t];}
for (int i=2;i<100001;i++)
 v[i] = max(v[i-1], v[i-2]+v[i]*i);
cout << v[100000];
}