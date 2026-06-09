#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;

  int no_ai = (n + x + y - 1) / (x + y);

  int remaining = n - x * z;
  int with_ai;
  if (remaining <= 0) {
    with_ai = (n + x - 1) / x;
  } else {
    with_ai = z + (remaining + x + 10 * y - 1) / (x + 10 * y);
  }

  cout << min(no_ai, with_ai) << '\n';

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
