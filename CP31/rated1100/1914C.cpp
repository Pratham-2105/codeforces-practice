#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n), b(n);

  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < n; ++i)
    cin >> b[i];

  int maxi = 0, sum = 0, ans = 0;

  for (int i = 0; i < min(n, k); ++i) {
    sum += a[i];
    maxi = max(maxi, b[i]);
    ans = max(ans, sum + (k - (i + 1)) * maxi);
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
