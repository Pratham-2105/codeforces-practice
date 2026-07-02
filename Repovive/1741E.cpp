/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> b(n);
  for (int i = 0; i < n; ++i)
    cin >> b[i];

  vector<bool> dp(n + 1, false);
  dp[0] = 1;

  for (int i = 0; i < n; ++i) {
    if (dp[i] && i + b[i] + 1 <= n)
      dp[i + b[i] + 1] = true;

    if (i - b[i] >= 0 && dp[i - b[i]])
      dp[i + 1] = true;
  }

  cout << (dp[n] ? "YES\n" : "NO\n");
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
