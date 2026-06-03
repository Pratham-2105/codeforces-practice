#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;

  int k = 3 * n;

  for (int i = 1; i <= n; ++i) {
    cout << i << " " << k - 1 << " " << k << " ";
    k -= 2;
  }

  cout << '\n';
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
