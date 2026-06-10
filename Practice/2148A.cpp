#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int x, n;
  cin >> x >> n;

  if (n % 2 == 0) {
    cout << 0 << "\n";
  } else {
    cout << x << "\n";
  }

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
