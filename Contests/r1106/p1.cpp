#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n;
  long long c;
  cin >> n >> c;

  vector<long long> a(n), b(n);

  for (auto &x : a)
    cin >> x;
  for (auto &x : b)
    cin >> x;

  const long long INF = 1e18;
  long long ans = INF;

  bool ok = true;
  long long no_reorder = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] < b[i]) {
      ok = false;
      break;
    }
    no_reorder += a[i] - b[i];
  }

  if (ok)
    ans = min(ans, no_reorder);

  vector<long long> sa = a, sb = b;
  sort(sa.begin(), sa.end());
  sort(sb.begin(), sb.end());

  ok = true;
  for (int i = 0; i < n; i++) {
    if (sa[i] < sb[i]) {
      ok = false;
      break;
    }
  }

  if (ok) {
    long long sumA = accumulate(a.begin(), a.end(), 0LL);
    long long sumB = accumulate(b.begin(), b.end(), 0LL);

    ans = min(ans, c + (sumA - sumB));
  }

  cout << (ans == INF ? -1 : ans) << '\n';
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
