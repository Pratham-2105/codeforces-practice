#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  for (int i = 0; i < n; ++i) {
    if (s[i] != t[i]) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";

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
