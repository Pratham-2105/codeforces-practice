#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k, b, s;
  cin >> n >> k >> b >> s;

  ll min_s = (k * b);
  ll max_s = (k * b) + (k - 1) * n;

  vector<ll> ans(n, 0);

  if (s < min_s || s > max_s) {
    cout << -1 << '\n';
    return;
  } else {
    ans[0] = min_s;
    s -= min_s;

    for (int i = 0; i < n; ++i) {
      ll add = min(k - 1, s);
      ans[i] += add;
      s -= add;
    }
  }

  for (int i = 0; i < n; ++i) {
    cout << ans[i] << " ";
  }
  cout << '\n';

  cout.flush();
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
