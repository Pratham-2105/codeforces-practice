/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll x, y;
  cin >> y >> x;

  ll k = max(x, y);
  ll ans;

  if (k % 2 == 0) {
    if (y == k)
      ans = k * k - x + 1;
    else
      ans = (k - 1) * (k - 1) + y;
  } else {
    if (x == k)
      ans = k * k - y + 1;
    else
      ans = (k - 1) * (k - 1) + x;
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
