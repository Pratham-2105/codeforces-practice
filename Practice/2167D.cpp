#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  vector<ll> primes = {2,  3,  5,  7,  11, 13, 17, 19,
                       23, 29, 31, 37, 41, 43, 47, 53};
  for (ll x : primes) {
    int ok = 0;
    for (ll i : arr) {
      if (i % x) {
        ok = 1;
        break;
      }
    }

    if (ok) {
      cout << x << '\n';
      return;
    }
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
