#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, x, y;
  cin >> n >> x >> y;

  ll sum_all = 0;

  vector<ll> money(n);
  for (int i = 0; i < n; ++i) {
    cin >> money[i];
    sum_all += money[i] / x;
  }

  ll ans = 0;

  for (int i = 0; i < n; ++i) {
    ll transfers = sum_all - (money[i] / x);
    ans = max(ans, money[i] + transfers * y);
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
