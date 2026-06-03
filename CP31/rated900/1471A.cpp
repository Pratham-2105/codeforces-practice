#include <bits/stdc++.h>
#include <cmath>
using namespace std;

using ll = long long;

void solve() {
  ll n, x;
  cin >> n >> x;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ll mx = 0, mn = 0;

  for (int i = 0; i < n; ++i) {
    mx += ceil(arr[i] * 1.0 / x);
    mn += arr[i];
  }

  mn = ceil(mn * 1.0 / x);

  cout << mn << " " << mx << "\n";
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
