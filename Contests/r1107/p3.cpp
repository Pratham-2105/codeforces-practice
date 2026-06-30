#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  ll ans = 1;

  for (int i = 1; i < n; ++i) {
    if (s[i] != s[i - 1]) {
      ans++;
    }
  }

  if (ans == 2) {
    cout << 2 << '\n';
  } else {
    cout << 1 << '\n';
  }
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
