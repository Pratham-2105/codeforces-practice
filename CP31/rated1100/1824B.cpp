/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, x;
  cin >> n >> x;

  int a[100000];
  int s = 0;

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < n; ++j)
      cin >> a[j];
    for (int j = 0; j < n; ++j) {
      if ((x | a[j]) != x)
        break;
      s |= a[j];
    }
  }

  if (s == x)
    cout << "YES\n";
  else
    cout << "NO\n";

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
