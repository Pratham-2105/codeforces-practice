/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  ll mx = 0;

  for (int i = 0; i < n - 1; ++i) {
    mx = max(mx, a[i] - a[i + 1]);
  }

  for (int i = 1; i < n; ++i) {
    if (a[i] < a[i - 1]) {
      a[i] += mx;
    }
  }

  if (is_sorted(a.begin(), a.end())) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

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
