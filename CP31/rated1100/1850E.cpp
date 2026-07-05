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
  ll n, c;
  cin >> n >> c;

  vector<ll> sides(n);
  for (int i = 0; i < n; ++i)
    cin >> sides[i];

  ll start = 1, end = 1e9, ans = -1;

  while (start <= end) {
    ll mid = start + (end - start) / 2;
    ll sum_all = 0;

    for (int i = 0; i < n; ++i) {
      sum_all += (sides[i] + 2 * mid) * (sides[i] + 2 * mid);
      if (sum_all > c)
        break;
    }

    if (sum_all <= c) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  cout << ans << '\n';
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
