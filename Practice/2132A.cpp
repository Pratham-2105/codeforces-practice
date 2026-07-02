/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;

  string a;
  cin >> a;

  int m;
  cin >> m;

  string b, c;
  cin >> b >> c;

  string V = "", D = "";

  for (int i = 0; i < m; ++i) {
    char ch = c[i];
    char to_append = b[i];

    if (ch == 'V') {
      V += to_append;
    } else {
      D += to_append;
    }
  }

  reverse(V.begin(), V.end());
  string res = V + a + D;

  cout << res << '\n';
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
