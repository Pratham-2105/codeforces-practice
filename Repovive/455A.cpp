#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> arr(n);
  vector<ll> count((int)1e5 + 10);

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    count[arr[i]]++;
  }

  ll mx = *max_element(arr.begin(), arr.end());

  vector<ll> dp(mx + 1);
  dp[0] = 0, dp[1] = 1 * count[1];

  for (int i = 2; i <= mx; ++i) {
    dp[i] = max(dp[i - 1], dp[i - 2] + i * count[i]);
  }

  cout << dp[mx] << '\n';
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
