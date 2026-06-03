#include <bits/stdc++.h>
#include <memory>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n * k);

  for (int i = 0; i < n * k; ++i)
    cin >> arr[i];

  ll total_sum = 0;
  int pointer = n * k;

  while (k--) {
    pointer -= (n / 2 + 1);
    total_sum += arr[pointer];
  }

  cout << total_sum << "\n";

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
