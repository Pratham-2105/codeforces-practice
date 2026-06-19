#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> arr(n);

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      ll temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] += temp;
    }
  }

  cout << arr[n - 1] << '\n';

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
