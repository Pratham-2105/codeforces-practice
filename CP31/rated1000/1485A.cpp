#include <bits/stdc++.h>
#include <climits>
using namespace std;

using ll = long long;

void solve() {
  ll a, b;
  cin >> a >> b;
  ll count = INT_MAX;

  for (int add = 0; add < 32; ++add) {
    ll ops = add;
    ll new_b = b + add;

    if (new_b == 1) {
      continue;
    }

    ll copy_a = a;
    while (copy_a > 0) {
      copy_a /= new_b;
      ops++;
    }

    count = min(count, ops);
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
