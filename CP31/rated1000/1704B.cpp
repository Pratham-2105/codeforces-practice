#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, x;
  cin >> n >> x;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  vector<pair<ll, ll>> segments(n);
  for (int i = 0; i < n; ++i) {
    segments[i] = {arr[i] - x, arr[i] + x};
  }

  ll ans = 0;

  ll l = segments[0].first;
  ll r = segments[0].second;

  for (int i = 1; i < n; ++i) {
    l = max(l, segments[i].first);
    r = min(r, segments[i].second);

    if (l > r) {
      ans++;

      l = segments[i].first;
      r = segments[i].second;
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
