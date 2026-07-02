#include <bits/stdc++.h>
#include <iterator>
#include <unordered_map>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  map<int, int> dp;

  int ans = 0, last = 0;

  for (int i = 0; i < n; ++i) {
    int x = arr[i];
    dp[x] = dp[x - 1] + 1;

    if (ans < dp[x]) {
      ans = dp[x];
      last = x;
    }
  }

  vector<int> res;
  for (int i = n - 1; i >= 0; --i) {
    if (arr[i] == last) {
      res.push_back(i);
      --last;
    }
  }

  reverse(res.begin(), res.end());

  cout << ans << '\n';
  for (auto it : res) {
    cout << it + 1 << " ";
  }
  cout << '\n';

  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;

  while (t--) {
    solve();
  }
}
