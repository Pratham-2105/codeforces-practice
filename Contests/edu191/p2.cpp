#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(4 * n);

  vector<int> gap = {0, 1, 0, 0};

  for (int k = 0; k < 4; ++k) {
    for (int i = 1; i <= n; ++i) {
      arr[k * n + (i + gap[k]) % n] = i;
    }
  }

  for (int i = 0; i < 4 * n; ++i) {
    cout << arr[i] << " ";
  }

  cout << '\n';
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
