/*
 *
 *  Author: beingPratham
 *
 */

#include <bits/stdc++.h>
#include <pthread.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<int> arr(n);
  ll sum = 0;
  int negs = 0;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[i] < 0) {
      ++negs;
      arr[i] = -arr[i];
    }

    sum += arr[i];
  }

  sort(arr.begin(), arr.end());

  if (negs & 1) {
    sum -= 2 * arr[0];
  }

  cout << sum << '\n';

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
