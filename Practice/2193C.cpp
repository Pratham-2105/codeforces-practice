#include <bits/stdc++.h>
#include <iterator>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, q;
  cin >> n >> q;

  vector<ll> a(n), b(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
    a[i] = max(a[i], b[i]);
  }

  for (int i = n - 2; i >= 0; --i) {
    a[i] = max(a[i], a[i + 1]);
  }

  vector<ll> prefix(n + 1);
  prefix[0] = 0;

  for (int i = 1; i <= n; ++i) {
    prefix[i] = prefix[i - 1] + a[i - 1];
  }

  while (q--) {
    int l, r;
    cin >> l >> r;

    cout << prefix[r] - prefix[l - 1] << ' ';
  }
  cout << '\n';

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
