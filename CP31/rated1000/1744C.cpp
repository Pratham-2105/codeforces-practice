#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;

  char c;
  cin >> c;
  string s;
  cin >> s;

  s += s;
  n = 2 * n;

  int last_green = -1;
  int mx = INT_MIN;

  for (int i = n - 1; i >= 0; --i) {
    if (s[i] == 'g') {
      last_green = i;
    }

    if (s[i] == c) {
      int diff = last_green - i;
      mx = max(mx, diff);
    }
  }

  cout << mx << '\n';

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
