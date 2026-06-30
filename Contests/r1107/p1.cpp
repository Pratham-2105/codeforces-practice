#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll x, y;
  cin >> x >> y;

  if (x == y)
    cout << "YES\n";
  else if (y == 1)
    cout << "NO\n";
  else if (x % y == 0)
    cout << "YES\n";
  else
    cout << "NO\n";

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
