/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

constexpr ll MOD = 1000000007;

void solve() {
  ll r, g;
  cin >> r >> g;

  ll h = 0;
  while (((h + 1) * (h + 2)) / 2 <= r + g)
    h++;

  ll S = (h * (h + 1)) / 2;

  vector<ll> dp(S + 1);
  dp[0] = 1;

  for (int i = 1; i <= h; ++i) {
    for (int j = S; j >= i; --j) {
      dp[j] = (dp[j] + dp[j - i]) % MOD;
    }
  }

  int answer = 0;
  for (int j = 0; j <= S; ++j) {
    if (j <= r && S - j <= g) {
      answer = (answer + dp[j]) % MOD;
    }
  }

  cout << answer << '\n';
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;

  while (t--) {
    solve();
  }
}
