#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  string a;
  getline(cin,a);
  if ((int)(a[a.length()-1] - '0') % 2 == 0) {
    cout << 0 << endl;
  }
  else cout << 1 << endl;
  return 0;
}