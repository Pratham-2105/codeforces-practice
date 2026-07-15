/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

vector<int> pairs[1001];

void solve() {
  ll n;
  cin >> n;

  vector<int> idx(1001, 0);
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;

    idx[x] = i;
  }

  int ans = -1;

  for (int i = 1; i <= 1000; ++i) {
    if (idx[i] == 0)
      continue;

    for (int j : pairs[i]) {
      if (idx[j] != 0) {
        ans = max(ans, idx[i] + idx[j]);
      }
    }
  }

  cout << ans << '\n';
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 1; i <= 1000; ++i) {
    for (int j = 1; j <= 1000; ++j) {
      if (gcd(i, j) == 1) {
        pairs[i].push_back(j);
      }
    }
  }

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
