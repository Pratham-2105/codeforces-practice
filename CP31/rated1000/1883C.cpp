#include <bits/stdc++.h>
#include <climits>
using namespace std;

using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> arr(n);

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int ans = INT_MAX;
  int even = 0;

  for (int i = 0; i < n; ++i) {
    if (arr[i] % 2 == 0)
      even++;

    if (arr[i] % k == 0)
      ans = 0;

    ans = min(ans, (k - arr[i] % k));
  }

  if (k == 4) {
    if (even >= 2)
      ans = min(ans, 0);
    else if (even == 1)
      ans = min(ans, 1);
    else
      ans = min(ans, 2);
  }

  cout << ans << '\n';
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
