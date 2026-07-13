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
  ll n, k;
  cin >> n >> k;

  vector<vector<int>> matrix(n, vector<int>(n));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> matrix[i][j];
    }
  }

  ll count = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (matrix[i][j] != matrix[n - i - 1][n - j - 1])
        count++;
    }
  }

  count /= 2;

  if (count > k) {
    cout << "NO\n";
  }

  else {
    ll temp = k - count;

    if (temp % 2 == 0)
      cout << "YES\n";

    else {
      if (n % 2 == 0) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
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
