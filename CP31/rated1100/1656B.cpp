/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  map<ll, bool> mp;

  for (auto it : arr)
    mp[it] = true;

  for (int i = 0; i < n; ++i) {
    if (mp.find(arr[i] - k) != mp.end()) {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";

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
