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

  vector<int> cnt(2);
  for (char c : s) {
    cnt[c - '0']++;
  }
  int mn = max(cnt[0], cnt[1]) - n / 2;
  int mx = cnt[0] / 2 + cnt[1] / 2;
  if (k >= mn && (k - mn) % 2 == 0 && k <= mx)
    cout << "YES\n";
  else
    cout << "NO";

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
