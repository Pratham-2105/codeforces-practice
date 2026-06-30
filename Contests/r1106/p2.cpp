#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  ll ans = 0;

  for (ll i = 1; i <= n;) {
    ll k = n / i;
    ll r = n / k;

    ans += (r - i + 1) * k * k;

    i = r + 1;
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
