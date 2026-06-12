#include <bits/stdc++.h>
#include <climits>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;

  int mx = INT_MIN;
  int mn = INT_MAX;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;

    mx = max(mx, x);
    mn = min(mn, x);
  }

  cout << mx + 1 - mn << "\n";
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
