#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isFair(ll num) {
  ll n = num;
  while (num != 0) {
    int x = num % 10;
    if (x != 0 && n % x != 0) {
      return false;
    }
    num /= 10;
  }

  return true;
}

void solve() {
  ll n;
  cin >> n;

  while (!isFair(n)) {
    n++;
  }

  cout << n << '\n';

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
