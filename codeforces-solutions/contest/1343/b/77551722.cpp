#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    if ((n / 2) % 2 == 0) {
      cout << "YES" << endl;
      int parni = 2;
      int neparni = 1;
      for (int i = 0; i < n/2; i++) {
        cout << parni << " ";
      
        parni += 2;
      }
      for (int i = 0; i < (n/2) - 1; i++) {
        cout << neparni << " ";
      
        neparni += 2;
      }
      cout << neparni + ((parni - 2) / 2);
      cout << endl;
    }
    else
      cout <<"NO"<< endl;
  }
  return 0;
}