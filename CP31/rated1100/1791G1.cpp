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

  vector<ll> cost;
  for (int i = 1; i <= n; ++i) {
    ll x;
    cin >> x;

    cost.push_back(x + i);
  }

  sort(cost.begin(), cost.end());
  int i = 0, ans = 0;

  while (i < n && cost[i] <= c) {
    c -= cost[i];
    ans++;
    i++;
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
