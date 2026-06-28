#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool sol(ll n, ll m) {
  if (n == m)
    return true;
  else if (n % 3 != 0)
    return false;
  else {
    return (sol(n / 3, m) || sol(2 * n / 3, m));
  }
}
void solve() {
  ll n, m;
  cin >> n >> m;

  if (sol(n, m)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
