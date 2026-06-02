#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  while (n % 2 == 0) {
    n /= 2;
  }

  if (n > 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
