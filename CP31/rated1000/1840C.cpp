#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k, q;
  cin >> n >> k >> q;

  vector<ll> arr(n);

  for (int i = 0; i < n; ++i) {
    ll x;
    cin >> x;

    if (x <= q) {
      arr[i] = 1;
    } else {
      arr[i] = 0;
    }
  }

  ll count = 0, ways = 0;

  for (int i = 0; i < n; ++i) {
    if (arr[i] == 1) {
      count++;
    } else {
      if (count >= k) {
        ll diff = count - k + 1;
        ways += (diff * (diff + 1)) / 2;
      }
      count = 0;
    }
  }

  if (count >= k) {
    ll diff = count - k + 1;
    ways += (diff * (diff + 1)) / 2;
  }

  cout << ways << '\n';

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
