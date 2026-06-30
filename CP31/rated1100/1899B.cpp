#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> arr(n);

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  vector<ll> prefix(n);
  prefix[0] = arr[0];

  for (int i = 1; i < n; ++i) {
    prefix[i] = arr[i] + prefix[i - 1];
  }

  ll ans = 0;

  for (ll k = 1; k <= n; ++k) {
    if (n % k)
      continue;

    ll start = k - 1;
    ll res = 0;
    ll maxi = prefix[start];
    ll mini = prefix[start];

    for (ll idx = start + k; idx < n; idx += k) {
      ll curr = prefix[idx] - prefix[idx - k];
      maxi = max(maxi, curr);
      mini = min(mini, curr);
    }

    ans = max(ans, maxi - mini);
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
