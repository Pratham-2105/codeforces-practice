/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  string s;
  cin >> s;

  int a = 0, c = 0, g = 0, t = 0;
  int mx = 0;

  for (int i = 0; i < s.size(); ++i) {
    char ch = s[i];
    if (ch == 'A') {
      a++;
      mx = max(mx, a);

      c = 0;
      g = 0;
      t = 0;
    } else if (ch == 'C') {
      c++;
      mx = max(mx, c);

      a = 0;
      g = 0;
      t = 0;
    } else if (ch == 'G') {
      g++;
      mx = max(mx, g);

      a = 0;
      c = 0;
      t = 0;
    } else if (ch == 'T') {
      t++;
      mx = max(mx, t);

      a = 0;
      g = 0;
      c = 0;
    }
  }

  cout << mx << '\n';

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
