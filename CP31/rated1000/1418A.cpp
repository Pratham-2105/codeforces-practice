#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll ceil_division(ll a, ll b) { return (a + b - 1) / b; }
void solve() {
  ll x, y, k;
  cin >> x >> y >> k;

  // i need -> y * something = k;

  ll gained_sticks = x - 1;
  ll sticks_needed = k * y + k - 1;

  ll trades = 0;
  trades += ceil_division(sticks_needed, gained_sticks);
  trades += k;

  cout << trades << '\n';

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
