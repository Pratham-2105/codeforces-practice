#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll a, b;
  cin >> a >> b;

  if (a == b) {
    cout << 0 << '\n';
    return;
  }

  ll ra = a;
  ll rb = b;

  while (ra % 2 == 0)
    ra /= 2;

  while (rb % 2 == 0)
    rb /= 2;

  if (ra != rb) {
    cout << -1 << '\n';
  } else {
    a /= ra;
    b /= rb;

    a = log2(a);
    b = log2(b);

    ll ans = ceil(abs(a - b) / 3.0);
    cout << ans << '\n';
  }

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
