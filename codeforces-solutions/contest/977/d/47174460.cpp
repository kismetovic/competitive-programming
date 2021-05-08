/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

const int N = 105;

int n;
long long arr[N];

void solve(long long el, multiset <long long> ms, vector <long long> vec) {
  if (ms.find(el) == ms.end()) return;
  ms.erase(ms.find(el));
  vec.push_back(el);
  if (ms.empty()) {
    for (long long x : vec) {
      cout << x << " ";
    }
    cout << endl;
    exit(0);
  }
  solve(el * 2, ms, vec);
  if (el % 3 == 0) {
    solve(el / 3, ms, vec);
  }
}

int main() {
  cin >> n;
  multiset <long long> ms;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    ms.insert(arr[i]);
  }
  for (int i = 0; i < n; i++) {
    solve(arr[i], ms, vector <long long> ());
  }
  return 0;
}