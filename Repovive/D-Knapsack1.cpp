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
  ll n, w;
  cin >> n >> w;

  vector<int> arr1(n), arr2(n);

  for (int i = 0; i < n; ++i) {
    ll weight, value;
    cin >> weight >> value;

    arr1[i] = weight;
    arr2[i] = value;
  }

  vector<vector<int>> dp(n + 1, vector<int>(w + 1));
  for (int i = 0; i <= n; ++i)
    dp[i][0] = 0;
  for (int i = 0; i <= w; ++i)
    dp[0][i] = 0;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= w; ++j) {
      if (arr1[w - 1] <= w) {
        dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - arr1[i - 1]] + arr2[i - 1]);
      } else {
        dp[i][w] = dp[i - 1][w];
      }
    }
  }

  cout << dp[n][w];

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
