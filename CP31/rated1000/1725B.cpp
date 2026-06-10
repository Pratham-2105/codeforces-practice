#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, D;
  cin >> n >> D;

  vector<ll> players(n);
  for (int i = 0; i < n; ++i) {
    cin >> players[i];
  }

  sort(players.begin(), players.end());

  ll left = -1, right = n - 1;
  ll team_size = 1, teams = 0;

  while (left < right) {
    if ((players[right] * team_size) <= D && left < right) {
      left++;
      team_size++;
    } else {
      teams++;
      right--;
      team_size = 1;
    }
  }

  cout << teams << "\n";

  cout.flush();
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
}
