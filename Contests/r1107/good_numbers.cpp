#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

bool isGood(long long v) {
  set<int> d;
  while (v) {
    d.insert(v % 10);
    v /= 10;
  }
  return d.size() <= 2;
}
void solve() {
  ll n;
  // cin >> n;

  vector<ll> ans;

  for (ll i = 2; i <= 1000000000000000; ++i) {
    if (isGood(i)) {
      ans.push_back(i);
    }
  }

  for (auto it : ans) {
    cout << it << ", ";
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
