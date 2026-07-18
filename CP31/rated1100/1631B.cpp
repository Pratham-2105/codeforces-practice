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
  ll n;
  cin >> n;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  int ans = 0, i = n - 1;

  while (i >= 0 && arr[i] == arr[n - 1]) {
    i--;
  }

  if (i == -1) {
    cout << 0 << '\n';
    return;
  }

  while (i >= 0) {
    i -= (n - 1 - i);
    ans++;

    while (i >= 0 && arr[i] == arr[n - 1]) {
      i--;
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
