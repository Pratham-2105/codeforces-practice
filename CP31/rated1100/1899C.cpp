#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> v(n);

  for (int i = 0; i < n; ++i)
    cin >> v[i];

  ll ans = INT_MIN;
  int i = 0, j = 0;
  ll sum = 0;

  while (j < n) {
    if (sum < 0) {
      sum = 0;
      i = j;
    }

    if (i < j) {
      if ((v[j] ^ v[j - 1]) & 1) {
        sum += v[j];
      } else {
        sum = v[j];
        i = j;
      }
    } else {
      sum = v[j];
    }

    ans = max(ans, sum);
    j++;
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
