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
  ll n;
  cin >> n;

  ll d = 11;
  vector<ll> ans;

  while (n >= d) {
    if (n % d == 0) {
      ans.push_back(n / d);
    }

    d = (d - 1) * 10 + 1;
  }

  cout << (int)ans.size() << '\n';
  for (int i = (int)ans.size() - 1; i >= 0; --i) {
    cout << ans[i] << ' ';
  }
  cout << '\n';
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
