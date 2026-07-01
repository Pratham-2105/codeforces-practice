#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  for (int i = n; i >= 1; --i) {
    cout << i << " ";
  }
  cout << n << " ";
  for (int i = 1; i < n; ++i) {
    cout << i << " ";
  }
  cout << '\n';
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
