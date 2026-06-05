#include <bits/stdc++.h>
#include <stack>
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

  int count = 0, mx = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] >= mx) {
      mx = arr[i];
      count++;
    }
  }

  cout << count << '\n';
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
