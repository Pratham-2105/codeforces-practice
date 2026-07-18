/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<string> arr(2);
  cin >> arr[0] >> arr[1];

  vector<int> dp(n + 1, INT_MAX);
  dp[0] = 0;

  for (int i = 0; i < n; ++i) {
    dp[i + 1] = min(dp[i + 1], dp[i] + (arr[0][i] != arr[1][i]));

    if (i + 1 < n) {
      dp[i + 2] = min(dp[i + 2], dp[i] + (arr[0][i] != arr[0][i + 1]) +
                                     (arr[1][i] != arr[1][i + 1]));
    }
  }

  cout << dp[n] << '\n';
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
