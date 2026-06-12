#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<int> count(k);

  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') {
      count[i % k]++;
    }
  }

  bool ok = true;
  for (int i = 0; i < k; ++i) {
    if (count[i] % 2 == 1) {
      ok = false;
      break;
    }
  }

  if (ok)
    cout << "YES\n";
  else
    cout << "NO\n";

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
