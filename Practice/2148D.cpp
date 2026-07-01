#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  ll e = 0, o = 0;
  vector<ll> arr(n), even, odd;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[i] % 2 == 0) {
      e++;
      even.push_back(arr[i]);
    } else {
      o++;
      odd.push_back(arr[i]);
    }
  }

  if (o == 0) {
    cout << 0 << '\n';
    return;
  }
  ll ans = 0;

  if (o > 0) {
    ll sum_of_evens = accumulate(even.begin(), even.end(), 0LL);
    ans += sum_of_evens;
  }

  // deal with odds;
  sort(odd.begin(), odd.end());
  for (int i = odd.size() - 1; i >= ceil(odd.size() / 2); --i) {
    ans += odd[i];
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
