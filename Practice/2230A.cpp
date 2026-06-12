#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, a, b;
  cin >> n >> a >> b;

  ll c = n / 3;
  ll d = n % 3;

  cout << min({(c + 1) * b, c * b + d * a, n * a}) << '\n';
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
