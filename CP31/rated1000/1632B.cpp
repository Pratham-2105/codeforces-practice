#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  n--;

  ll msb = log2(n);
  vector<ll> ans;

  ll num = pow(2, msb) - 1;

  while (num >= 0) {
    ans.push_back(num);
    num--;
  }

  num = pow(2, msb);

  while (num <= n) {
    ans.push_back(num);
    num++;
  }

  for (auto it : ans) {
    cout << it << " ";
  }
  cout << '\n';

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
