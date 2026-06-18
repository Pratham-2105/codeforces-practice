#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  for (int i = 0; i < n - 1; ++i) {
    if (s[i] > s[i + 1]) {
      cout << "YES\n";
      cout << i + 1 << " " << i + 2 << '\n';

      return;
    }
  }

  cout << "NO\n";
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;

  while (t--) {
    solve();
  }
}
