#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n, r, b;
  cin >> n >> r >> b;
  string s;

  int length_red = r / (b + 1);
  int extra_red = r % (b + 1);

  for (int times = 1; times <= b + 1; times++) {
    for (int i = 0; i < length_red; ++i)
      s += 'R';

    if (extra_red > 0) {
      s += 'R';
      extra_red--;
    }

    if (times != b + 1) {
      s += 'B';
    }
  }

  cout << s << "\n";

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
