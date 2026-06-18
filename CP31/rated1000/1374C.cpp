#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  int count = 0;
  int openings = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '(') {
      openings++;
    } else if (s[i] == ')' && openings == 0) {
      count++;
    } else {
      openings--;
    }
  }

  cout << count << '\n';

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
