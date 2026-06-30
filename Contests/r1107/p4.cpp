#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n + 1), b(n + 1);

  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++)
    cin >> b[i];

  vector<ll> e(n + 2, 0);

  for (int i = 1; i <= n; i++) {
    ll diff = b[i] - a[i];
    e[i] = (i & 1) ? -diff : diff;
  }

  if (e[1] > 0) {
    cout << "NO\n";
    return;
  }

  ll U = 0;

  for (int i = 2; i <= n + 1; i++) {
    ll cur = (i == n + 1 ? 0 : e[i]);

    if ((i & 1) == 0) {
      U += cur - e[i - 1];
    }

    if (U < max(0LL, cur)) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
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
