/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

const ll MOD = 1e9 + 7;

bool valid(int i, int j, int n) {
  if (i < 0 || i >= n)
    return false;
  if (j < 0 || j >= n)
    return false;

  return true;
}

void solve() {
  ll n;
  cin >> n;

  vector<vector<char>> grid(n, vector<char>(n));

  char block = '*';

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> grid[i][j];
    }
  }

  vector<vector<ll>> dp(n + 1, vector<ll>(n + 1));
  for (int i = 0; i <= n; ++i) {
    dp[i][0] = 0;
    dp[0][i] = 0;
  }

  dp[1][1] = 1;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {

      if (i == 1 && j == 1)
        continue;

      if (grid[i - 1][j - 1] == '*')
        dp[i][j] = 0;
      else
        dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
    }
  }

  cout << dp[n][n] << '\n';

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
