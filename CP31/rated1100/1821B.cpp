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

  vector<ll> a(n), b(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < n; ++i)
    cin >> b[i];

  int diffl = -1, diffr = -1;

  for (int i = 0; i < n; ++i) {
    if (a[i] != b[i]) {
      diffr = i;

      if (diffl == -1)
        diffl = i;
    }
  }

  while (diffl > 0 && b[diffl - 1] <= b[diffl])
    diffl--;
  while (diffr < n - 1 && b[diffr + 1] >= b[diffr])
    diffr++;

  cout << diffl + 1 << " " << diffr + 1 << '\n';
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
