#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  string s;
  cin >> s;
  int ones = 0, zeros = 0;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '1')
      ones++;
    else
      zeros++;
  }

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '1') {
      if (zeros == 0) {
        cout << s.size() - i << '\n';
        return;
      }
      zeros--;
    } else {
      if (ones == 0) {
        cout << s.size() - i << '\n';
        return;
      }
      ones--;
    }
  }

  cout << 0 << '\n';

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
