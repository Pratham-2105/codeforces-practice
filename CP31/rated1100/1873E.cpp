/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

bool check(ll mid, vector<ll> arr, ll x) {
  ll units = 0;
  int n = arr.size();
  for (int i = 0; i < n; ++i) {
    if (arr[i] < mid) {
      units += (mid - arr[i]);
    }
  }

  return units <= x;
}

void solve() {
  ll n, x;
  cin >> n >> x;

  vector<ll> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  ll start = 1, end = 1e12, ans = -1;

  while (start <= end) {
    ll mid = start + (end - start) / 2;

    if (check(mid, a, x)) {
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
