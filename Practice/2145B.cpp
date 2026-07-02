/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int ones = 0, twos = 0, zeros = 0;
  for (int i = 0; i < k; ++i) {
    if (s[i] == '1')
      ones++;
    else if (s[i] == '2')
      twos++;
    else
      zeros++;
  }
  string res(n, '+');

  for (int i = 0; i < n; ++i) {
    if (i < zeros + twos || i >= n - ones - twos)
      res[i] = '?';
    if (i < zeros || i >= n - ones || k == n)
      res[i] = '-';
  }
  cout << res << '\n';
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
