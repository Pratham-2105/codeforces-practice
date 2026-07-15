/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  int count = 0;
  int mx = 0;

  for (int i = 0; i < n; ++i) {
    if (s[i] == '#') {
      count++;
      mx = max(mx, count);

    } else {
      count = 0;
    }
  }

  cout << (mx + 1) / 2 << '\n';

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
