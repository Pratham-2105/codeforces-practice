#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a == b && b == c && c == d) {
    cout << "YES\n";
  } else
    cout << "NO\n";
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
