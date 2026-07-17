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

  if (2 * k > n) {
    cout << -1 << '\n';
    return;
  }

  int count = 0;
  for (int i = 0; i < k; ++i) {
    count += int(s[i] != 'R') + int(s[n - i - 1] != 'L');
  }

  cout << count << '\n';
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
