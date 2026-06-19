#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n);

  for (int i = 0; i < n; ++i)
    cin >> a[i];

  for (int i = 0; i < n; ++i)
    cin >> b[i];

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int idx = -1;
    for (int j = i; j < n; ++j) {
      if (a[j] <= b[i]) {
        idx = j;
        break;
      }
    }

    if (idx == -1) {
      cout << -1 << '\n';
      return;
    }
    for (int j = idx; j > i; --j) {
      swap(a[j], a[j - 1]);
      ans++;
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
