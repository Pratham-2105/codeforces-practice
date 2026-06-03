#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  string a, b, c;
  cin >> a >> b >> c;
  string out = "";

  out += a[0];
  out += b[0];
  out += c[0];

  cout << out << '\n';

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
