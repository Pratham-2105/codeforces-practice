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

  vector<ll> prefix(n);
  prefix[0] = arr[0];

  for (int i = 1; i < n; ++i) {
    prefix[i] = max(prefix[i - 1], arr[i]);
  }

  ll count = 0;
  for (int i = 0; i < n; i += 2) {
    ll diff = -1;

    if (i > 0) {
      diff = max(diff, arr[i] - prefix[i - 1]);
    }

    if (i < n - 1) {
      diff = max(diff, arr[i] - prefix[i + 1]);
    }

    count += diff + 1;
  }
  cout << count << '\n';
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
