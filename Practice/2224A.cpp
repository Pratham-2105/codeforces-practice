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

  for (int i = n - 1; i > 0; --i) {
    if (arr[i] > 0) {
      arr[i - 1] += arr[i];
    }
  }

  int count = 0;
  for (auto it : arr) {
    if (it > 0)
      count++;
  }

  cout << count << '\n';
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
