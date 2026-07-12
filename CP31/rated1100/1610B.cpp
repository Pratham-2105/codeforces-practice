/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

bool check(vector<ll> &arr, ll num) {
  int n = arr.size();
  vector<ll> b;

  for (int i = 0; i < n; ++i) {
    if (arr[i] != num) {
      b.push_back(arr[i]);
    }
  }

  int m = b.size();
  for (int i = 0; i < m; ++i) {
    if (b[i] != b[m - i - 1])
      return false;
  }

  return true;
}

void solve() {
  ll n;
  cin >> n;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  for (int i = 0; i < n; ++i) {
    if (arr[i] != arr[n - i - 1]) {
      if (check(arr, arr[i]) || check(arr, arr[n - i - 1]))
        cout << "YES\n";
      else
        cout << "NO\n";

      return;
    }
  }

  cout << "YES\n";

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
