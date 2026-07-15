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

  vector<ll> arr(n);

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  long long carry = 0;
  bool ok = true;

  for (int i = 0; i < n - 1; i++) {
    long long need = i + 1;

    long long available = arr[i] + carry;

    if (available < need) {
      ok = false;
      break;
    }

    carry = available - need;
  }

  if (ok) {
    long long last = arr[n - 1] + carry;
    if (last < n)
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
