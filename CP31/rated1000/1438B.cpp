#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  unordered_set<int> set;
  for (int i = 0; i < n; ++i) {
    set.insert(arr[i]);
  }

  if (set.size() >= n) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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
