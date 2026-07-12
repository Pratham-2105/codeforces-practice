/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  string s;
  cin >> s;

  s += s;
  int k = 0, z = 0;

  for (char ch : s) {
    z = (ch == '1' ? z + 1 : 0);
    k = max(k, z);
  }

  int n = s.size() / 2;

  if (k > n) {
    cout << (ll)n * n << "\n";
  } else {
    ll side_a = (k + 1) / 2;
    ll side_b = (k + 2) / 2;

    cout << side_a * side_b << '\n';
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
