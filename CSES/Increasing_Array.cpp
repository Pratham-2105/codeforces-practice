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
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  ll moves = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i - 1] > a[i]) {
      moves += (a[i - 1] - a[i]);
      a[i] = a[i - 1];
    }
  }

  cout << moves << '\n';
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
