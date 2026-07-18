/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll s, k, m;
  cin >> s >> k >> m;

  if (s <= k)
    cout << max(0LL, s - m % k) << '\n';
  else
    cout << (((m % (2 * k)) < k) ? s - m % k : k - m % k) << '\n';
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
