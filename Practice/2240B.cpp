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

  int len = s.length();
  int a[len + 5];

  for (int i = 0; i < len; i++) {
    if (s[i] == '.')
      cout << 0;
    else {
      if (s[i + 1] == '.')
        cout << 1;
      else
        cout << 2;
      i++;
    }
  }

  cout << endl;

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
