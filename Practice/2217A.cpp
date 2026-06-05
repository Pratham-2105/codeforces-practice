#include <bits/stdc++.h>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  int sum = accumulate(arr.begin(), arr.end(), 0);

  if (sum % 2 == 1) {
    cout << "YES\n";
  } else {
    int new_sum = n * k;
    if (new_sum % 2 == 1) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
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
