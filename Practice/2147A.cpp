#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll x, y;
  cin >> x >> y;

  if (x < y) {
    cout << 2 << "\n";
  } else if (y > 1 && x > y + 1) {
    cout << 3 << "\n";
  } else {
    cout << -1 << "\n";
  }
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
