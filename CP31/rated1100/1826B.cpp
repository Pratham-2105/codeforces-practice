/*
 *
 *  Author: beingPratham
 *
 */

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  ll ans = 0;
  for (int i = 0; i < n; ++i) {
    ans = __gcd(ans, abs(a[i] - a[n - i - 1]));
  }

  cout << ans << '\n';
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
