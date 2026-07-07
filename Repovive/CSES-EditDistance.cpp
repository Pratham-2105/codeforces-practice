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
  string n, m;
  cin >> n >> m;

  vector<vector<int>> dp(n.size() + 1, vector<int>(m.size() + 1, 0));

  for (int i = 0; i <= n.size(); i++)
    dp[i][0] = i;

  for (int j = 0; j <= m.size(); j++)
    dp[0][j] = j;

  for (int i = 1; i < n.size() + 1; ++i) {
    for (int j = 1; j < m.size() + 1; ++j) {
      char A = n[i - 1], B = m[j - 1];

      if (A == B) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        int replace = dp[i - 1][j - 1] + 1;
        int del = dp[i - 1][j] + 1;
        int insert = dp[i][j - 1] + 1;

        dp[i][j] = min(replace, min(del, insert));
      }
    }
  }

  cout << dp[n.size()][m.size()] << '\n';
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
