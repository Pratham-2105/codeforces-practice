#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;

  string strip;
  cin >> strip;

  vector<ll> prefix(n + 1, 0);

  for (int i = 0; i < n; ++i) {
    prefix[i + 1] = prefix[i] + (strip[i] == 'W');
  }

  ll min_cells = INT_MAX;

  for (int i = 0; i <= n - k; ++i) {
    ll diff = prefix[i + k] - prefix[i];
    min_cells = min(min_cells, diff);
  }

  cout << min_cells << '\n';

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
