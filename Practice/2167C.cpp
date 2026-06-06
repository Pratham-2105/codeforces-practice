#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;
  vector<ll> arr(n);

  bool even = false, odd = false;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] % 2 == 0)
      even = true;
    else if (arr[i] % 2 == 1)
      odd = true;
  }

  if (even && odd) {
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
    }

    cout << '\n';
    return;
  } else {
    for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
    }

    cout << '\n';
    return;
  }

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
