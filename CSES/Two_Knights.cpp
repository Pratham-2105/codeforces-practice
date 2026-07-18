/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void ans(ll n) {
  ll total = ((n * n) * ((n * n) - 1)) / 2;
  ll attack = 4 * (n - 1) * (n - 2);

  cout << total - attack;
}

void solve() {
  ll n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    ans(i);
    cout << '\n';
  }
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
