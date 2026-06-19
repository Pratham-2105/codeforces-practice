#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> points(n);
  for (int i = 0; i < n; ++i) {
    cin >> points[i];
  }

  vector<pair<ll, ll>> buildings;
  for (int i = 0; i < n; ++i)
    buildings.push_back({points[i], i});

  sort(buildings.rbegin(), buildings.rend());

  vector<ll> ans(n + 1, 0);
  ans[0] = 0;

  ll time = 0, coords = 1;

  for (int i = 0; i < n; ++i) {
    ans[buildings[i].second + 1] = coords;
    time += (2 * abs(coords) * buildings[i].first);

    if (coords < 0) {
      coords = abs(coords) + 1;
    } else {
      coords = -coords;
    }
  }

  cout << time << '\n';
  for (auto it : ans) {
    cout << it << " ";
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
