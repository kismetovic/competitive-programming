#include <bits/stdc++.h>

using namespace std;

int main() {

  long n(0);
  cin >> n;

  vector<string> winner(n + 1, "");
  vector<long> points(n + 1, 0);

  for (long k = 1; k <= n; k++) {
    string name;
    long addPoints;
    cin >> name >> addPoints;
    winner[k] = name;
    points[k] = addPoints;
  }

  set<string> players;
  for (long k = 1; k <= n; k++) {
    if (players.find(winner[k]) == players.end()) {
      players.insert(winner[k]);
    }
  }

  map<string, vector<long> > state;
  set<string>::iterator nameIter;

	vector<long> zeroVec(n + 1, 0);
  for (nameIter = players.begin(); nameIter != players.end(); nameIter++) {
    state.insert(
        pair<string, vector<long> >(*nameIter, zeroVec));
  }

  for (long k = 1; k <= n; k++) {
    for (nameIter = players.begin(); nameIter != players.end(); nameIter++) {
      state[*nameIter][k] = state[*nameIter][k - 1];
    }
    state[winner[k]][k] += points[k];
  }

  long maxScore = 0;
  for (nameIter = players.begin(); nameIter != players.end(); nameIter++) {
    if (state[*nameIter][n] > maxScore) {
      maxScore = state[*nameIter][n];
    }
  }

  string finalWinner("");
  for (long k = 1; k <= n; k++) {
    if (finalWinner.size() > 0) {
      break;
    }
    for (nameIter = players.begin(); nameIter != players.end(); nameIter++) {
      if (state[*nameIter][k] >= maxScore && state[*nameIter][n] == maxScore) {
        finalWinner = *nameIter;
        break;
      }
    }
  }

  cout << finalWinner;

  return 0;
}
