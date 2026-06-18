#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> arr[i][j];
    }
  }

  int negatives = 0, mn = INT_MAX;
  int sum = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (arr[i][j] < 0) {
        negatives++;
      }

      mn = min(mn, abs(arr[i][j]));
      sum += abs(arr[i][j]);
    }
  }

  if (negatives % 2 == 0) {
    cout << sum << '\n';
  } else {
    cout << sum - 2 * abs(mn) << '\n';
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
