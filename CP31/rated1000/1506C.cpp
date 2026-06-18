#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  string a, b;
  cin >> a >> b;

  int n = a.size(), m = b.size();
  int lcs = 0;

  for (int len = 1; len <= min(n, m); ++len) {
    for (int i = 0; i + len <= n; ++i) {
      for (int j = 0; j + len <= m; ++j) {

        string extract_A = a.substr(i, len);
        string extract_B = b.substr(j, len);

        if (extract_A == extract_B) {
          lcs = max(lcs, len);
        }
      }
    }
  }

  int ops = n + m - 2 * lcs;
  cout << ops << '\n';
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
