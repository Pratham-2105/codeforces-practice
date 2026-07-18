/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, x1, x2, k;
  cin >> n >> x1 >> x2 >> k;

  if (n <= 3) {
    cout << 1 << '\n';
    return;
  }
  cout << min(abs(x1 - x2), n - abs(x1 - x2)) + k << '\n';

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
