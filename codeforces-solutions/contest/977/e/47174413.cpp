/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

const int N=200005;
int n, m;
int ans;
bool used[N];
vector <int> adj[N];
bool cycle;
vector <int> vec;

void dfs(int u) {
  used[u] = 1;
  vec.push_back(u);
  for (int v : adj[u]) {
    if (!used[v]) {
      dfs(v);
    } else {
      cycle = 1;
    }
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--; y--;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for (int i = 0; i < n; i++) {
    if (!used[i]) {
      cycle = 0;
      dfs(i);
      bool ok = 1;
      if (cycle) {
        for (int x : vec) {
          ok &= (adj[x].size() == 2);
        }
        ans += ok;
      }
      vec.clear();
    }
  }
  cout << ans << endl;
  return 0;
}