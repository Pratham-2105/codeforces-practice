#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  int count_A = 0, count_B = 0;
  for (char ch : s) {
    if (ch == 'A')
      count_A++;
    else
      count_B++;
  }

  while (q--) {
    ll a;
    cin >> a;

    if (count_B == 0)
      cout << a << '\n';
    else {
      int ans = 0;
      while (a > 0) {

        for (char ch : s) {
          if (a == 0)
            break;

          ans += 1;

          if (ch == 'A')
            a -= 1;
          else
            a /= 2;
        }
      }
      cout << ans << '\n';
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
