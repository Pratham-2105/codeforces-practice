#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n);

  for (int i = 0; i < n; ++i)
    cin >> a[i];

  for (int i = 0; i < n; ++i)
    cin >> b[i];

  vector<ll> sub_a(2 * n + 1, 0);
  vector<ll> sub_b(2 * n + 1, 0);

  ll counter = 1;

  for (int i = 1; i < n; ++i) {
    if (a[i] == a[i - 1])
      counter++;

    else {
      sub_a[a[i - 1]] = max(sub_a[a[i - 1]], counter);
      counter = 1;
    }
  }

  sub_a[a[n - 1]] = max(sub_a[a[n - 1]], counter);
  counter = 1;

  for (int i = 1; i < n; ++i) {
    if (b[i] == b[i - 1]) {
      counter++;
    } else {
      sub_b[b[i - 1]] = max(sub_b[b[i - 1]], counter);
      counter = 1;
    }
  }

  sub_b[b[n - 1]] = max(sub_b[b[n - 1]], counter);

  ll max_freq = -1;

  for (int i = 1; i <= 2 * n; ++i) {
    max_freq = max(max_freq, sub_a[i] + sub_b[i]);
  }

  cout << max_freq << '\n';

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
