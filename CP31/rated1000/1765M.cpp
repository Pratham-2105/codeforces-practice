#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  ll a = 1;
  ll b = n - 1;

  for (ll fac = 2; fac * fac <= n; ++fac) {
    if (n % fac == 0) {
      a = n / fac;
      b = n - a;

      break;
    }
  }

  cout << a << " " << b << '\n';
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
