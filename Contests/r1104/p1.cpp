#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  int sum = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (arr[i] < arr[j]) {
        arr[j] = arr[i];
        break;
      }
    }
  }

  cout << accumulate(arr.begin(), arr.end(), 0) << '\n';
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
