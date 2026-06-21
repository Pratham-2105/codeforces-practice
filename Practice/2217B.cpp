#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k = 1;
  cin >> n >> k;

  vector<int> binary(n);
  for (int i = 0; i < n; ++i)
    cin >> binary[i];

  int pivot;
  cin >> pivot;

  int V = binary[pivot - 1];

  vector<int> boundary(n + 2);
  boundary[0] = 1;
  boundary[n + 1] = V;

  for (int i = 1; i <= n; ++i) {
    if (binary[i - 1] == V) {
      boundary[i] = 1;
    } else {
      boundary[i] = 0;
    }
  }

  int left = 0, right = 0;

  for (int i = 0; i < pivot; ++i) {
    if (boundary[i] != boundary[i + 1])
      left++;
  }

  for (int i = pivot; i <= n; ++i) {
    if (boundary[i] != boundary[i + 1])
      right++;
  }

  cout << max(left, right) << '\n';

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
