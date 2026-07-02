/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  cout << min(a[0], a[1]) + a[0] << '\n';
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
