#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  ll ones = 0, zeros = 0;
  vector<ll> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] == 0) {
      zeros++;
    } else if (arr[i] == 1) {
      ones++;
    }
  }

  if (zeros == 0)
    cout << "NO\n";
  else if (ones > 0)
    cout << "YES\n";
  else
    cout << (zeros == 1 ? "YES\n" : "NO\n");

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
