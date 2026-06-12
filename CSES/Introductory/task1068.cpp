#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  while (n != 1) {
    cout << n << " ";

    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = (n * 3) + 1;
    }
  }
  cout << 1 << '\n';

  cout.flush();
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
}
