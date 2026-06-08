#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  if (n == 10) {
    cout << -1 << '\n';
    return;
  }

  ll rem = n % 12;

  if (rem != 10) {
    cout << rem << " " << n - rem << "\n";
  } else {
    cout << 22 << " " << n - 22 << "\n";
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
