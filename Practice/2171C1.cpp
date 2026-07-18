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

  int x = 0;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    x ^= a[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> b[i];
    x ^= b[i];
  }

  if (!x) {
    cout << "Tie\n";
    return;
  }

  int idx;
  for (int i = 0; i < n; ++i)
    if (a[i] ^ b[i])
      idx = i;

  cout << (idx & 1 ? "Mai\n" : "Ajisai\n");

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
