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
  ll n, q;
  cin >> n >> q;

  vector<ll> arr(n), x(q);

  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  for (int i = 0; i < q; ++i) {
    cin >> x[i];
  }

  ll prev = 31;

  for (int i = 0; i < q; ++i) {
    if (x[i] >= prev)
      continue;

    ll val = pow(2, x[i]);

    for (int j = 0; j < n; ++j) {
      if (arr[j] % val == 0) {
        arr[j] += (val / 2);
      }
    }

    prev = x[i];
  }

  for (ll it : arr) {
    cout << it << " ";
  }

  cout << '\n';

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
