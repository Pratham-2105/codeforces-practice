/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll MOD = 1e9 + 7;

void solve() {
  ll n;
  cin >> n;

  ll ans = ((((n * (n + 1)) % MOD) * (4 * n - 1)) % MOD * 337) % MOD;

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
