#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  vector<pair<ll, int>> rems;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    rems.push_back({arr[i], i + 1});
  }

  for (int i = 0; i < n; ++i) {
    rems[i].first = rems[i].first % k;

    if (rems[i].first == 0)
      rems[i].first = k;
  }

  sort(rems.begin(), rems.end(), [&](pair<ll, int> a, pair<ll, int> b) {
    if (a.first != b.first)
      return a.first > b.first;

    return a.second < b.second;
  });

  for (auto it : rems) {
    cout << it.second << " ";
  }

  cout << "\n";
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
