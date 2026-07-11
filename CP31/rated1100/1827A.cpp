/*
 *
 *  Author: beingPratham
 *
 */

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < n; ++i)
    cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());

  ll result = 1;

  for (int i = 0; i < n; ++i) {
    ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
    ll count = a.size() - temp;

    result = result * max(count - i, 0LL) % mod;
  }

  cout << result << '\n';
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
