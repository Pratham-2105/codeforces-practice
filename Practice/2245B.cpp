/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, c;
  cin >> n >> c;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; ++i) {
    arr[i] -= c;
  }

  for (int i = 0; i < n / 2; ++i) {
    arr[i] = max(arr[i], 0LL);
  }

  ll sum_all = accumulate(arr.begin(), arr.end(), 0LL);

  cout << sum_all << '\n';
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
