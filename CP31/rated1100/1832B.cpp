/*
 *
 *  Author: beingPratham
 *
 */

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
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  ll sum_all = accumulate(arr.begin(), arr.end(), 0);

  sort(arr.begin(), arr.end());

  ll min_index = 0, max_index = n - 1;
  for (int i = 1; i <= k; ++i) {
    if (min_index + 1 < max_index) {
      ll mn = arr[min_index] + arr[min_index + 1];
      ll mx = arr[max_index];

      if (mn > mx) {
        sum_all -= mx;
        max_index--;
      } else {
        sum_all -= mx;
        min_index += 2;
      }
    }
  }

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
