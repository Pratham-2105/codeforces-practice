/*
 *
 *  Author: beingPratham
 *
 */

#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  vector<ll> prefix(n + 1);
  for (int i = 0; i < n; ++i) {
    prefix[i + 1] = prefix[i] + arr[i];
  }

  ll ans = 0;
  for (int i = 0; i <= k; ++i) {
    ans = max(ans, prefix[n - (k - i)] - prefix[2 * i]);
  }

  cout << ans << '\n';
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
