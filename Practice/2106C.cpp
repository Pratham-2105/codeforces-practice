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
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n), b(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < n; ++i)
    cin >> b[i];

  ll s = -1;
  for (int i = 0; i < n; ++i) {
    if (b[i] != -1) {
      if (s == -1)
        s = a[i] + b[i];
      else {
        if (s != a[i] + b[i]) {
          cout << 0 << "\n";
          return;
        }
      }
    }
  }

  if (s == -1) {
    sort(a.begin(), a.end());
    ll mx = a[n - 1] - a[0];
    cout << k - mx + 1 << '\n';

    return;
  }

  for (int i = 0; i < n; ++i) {
    if (a[i] > s || s - a[i] > k) {
      cout << 0 << '\n';
      return;
    }
  }

  cout << 1 << '\n';

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
