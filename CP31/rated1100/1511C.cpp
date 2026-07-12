/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, q;
  cin >> n >> q;

  vector<int> colors(n);
  for (int i = 0; i < n; ++i)
    cin >> colors[i];

  while (q--) {
    int color;
    cin >> color;

    int idx = find(colors.begin(), colors.end(), color) - colors.begin();
    cout << idx + 1 << " ";

    rotate(colors.begin(), colors.begin() + idx, colors.begin() + idx + 1);
  }

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
