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
  ll n;
  cin >> n;

  vector<ll> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];

  vector<ll> suffix(n);
  map<ll, ll> index;

  ll sum = 0;

  for (int i = n - 1; i >= 0; --i) {
    sum += v[i];
    index[sum] += i;
    suffix[i] = sum;
  }

  ll ans = 0;
  int prefix = 0;

  for (ll i = 0; i < n; ++i) {
    index.erase(suffix[i]);
    prefix += v[i];

    if (index.find(prefix) != index.end()) {
      ans = max(ans, (i + 1) + (n - index[prefix]));
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
