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

  vector<ll> c(n);
  for (int i = 0; i < n; ++i)
    cin >> c[i];

  sort(c.begin(), c.end());
  ll sum_all = 1;

  if (c[0] != 1) {
    cout << "NO\n";
    return;
  }

  for (int i = 1; i < n; ++i) {
    if (c[i] > sum_all) {
      cout << "NO\n";
      return;
    }

    sum_all += c[i];
  }

  cout << "YES\n";

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
