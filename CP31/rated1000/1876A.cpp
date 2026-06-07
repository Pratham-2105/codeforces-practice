#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, p;
  cin >> n >> p;

  vector<pair<ll, ll>> v(n);
  vector<ll> a(n), b(n);

  for (int i = 0; i < n; ++i)
    cin >> a[i];

  for (int i = 0; i < n; ++i)
    cin >> b[i];

  for (int i = 0; i < n; ++i) {
    v[i] = {b[i], a[i]};
  }

  sort(v.begin(), v.end());

  ll min_cost = p;
  ll already_shared = 1;

  for (auto it : v) {
    ll can_be_shared = it.second;
    ll sharing_cost = it.first;

    if (sharing_cost >= p)
      break;

    if (already_shared + can_be_shared > n) {
      min_cost += (n - already_shared) * sharing_cost;
      already_shared = n;
      break;
    } else {
      min_cost += can_be_shared * sharing_cost;
      already_shared += can_be_shared;
    }
  }

  min_cost += (n - already_shared) * p;
  cout << min_cost << "\n";

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
