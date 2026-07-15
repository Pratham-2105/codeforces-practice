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

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  ll g1 = 0, g2 = 0;
  for (int i = 0; i < n; i += 2) {
    g1 = gcd(g1, arr[i]);
  }
  for (int i = 1; i < n; i += 2) {
    g2 = gcd(g2, arr[i]);
  }

  bool flag = true;

  for (int i = 1; i < n; i += 2) {
    if (arr[i] % g1 == 0) {
      flag = false;
      break;
    }
  }

  if (flag) {
    cout << g1 << '\n';
    return;
  }

  flag = true;
  for (int i = 0; i < n; i += 2) {
    if (arr[i] % g2 == 0) {
      flag = false;
      break;
    }
  }

  if (flag) {
    cout << g2 << '\n';
  } else {
    cout << 0 << '\n';
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
