#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int x;
  cin >> x;

  int y = 1;

  while (x > 0) {
    y *= 10;
    x /= 10;
  }

  cout << y + 1 << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
}
