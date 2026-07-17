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

  if (n == 2) {
    cout << -1 << '\n';
    return;
  }

  vector<ll> a;
  if (n >= 1)
    a.push_back(1);

  if (n >= 3) {
    a = {1, 2, 3};

    ll sum = 6;

    for (int i = 4; i <= n; ++i) {
      a.push_back(sum);
      sum *= 2;
    }
  }

  for (int i = 0; i < (int)a.size(); i++) {
    cout << a[i] << (i + 1 == (int)a.size() ? '\n' : ' ');
  }

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
