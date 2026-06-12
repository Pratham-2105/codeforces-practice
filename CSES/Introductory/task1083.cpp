#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  ll sum = 0;
  for (int i = 0; i < n - 1; ++i) {
    cin >> a[i];
    sum += a[i];
  }

  ll actual_sum = (n * (n + 1)) / 2;

  cout << actual_sum - sum << '\n';

  cout.flush();
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
}
