#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n; cin >> n;
  ll zeroes = 0;
  ll ones = 0;

  for (int i = 0; i < n; ++i) {
    ll x; cin >> x;
    if (x == 0) 
      zeroes++;
    else if (x == 1)
      ones++;
  }

  ll ways = pow(2, zeroes) * ones;

  cout << ways << '\n';

  cout.flush();
  return;
}   

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while(t--) {
    solve();
  }
}
