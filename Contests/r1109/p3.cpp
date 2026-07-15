/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n, x, y;
  cin >> n >> x >> y;

  int g = gcd(x, y);

  bool ok = true;

  for (int i = 1; i <= n; i++) {
    int p;
    cin >> p;

    if ((i - p) % g != 0)
      ok = false;
  }

  cout << (ok ? "YES" : "NO") << '\n';

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
