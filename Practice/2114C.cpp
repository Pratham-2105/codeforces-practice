/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  int last = -1, ans = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    if (a - last > 1) {
      ans++;
      last = a;
    }
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
