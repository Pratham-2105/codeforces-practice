#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  map<char, int> freq;
  int count = 0;

  vector<ll> distinct(n, 0);

  for (int i = 0; i < n; ++i) {
    freq[s[i]]++;

    if (freq[s[i]] == 1) {
      count++;
    }

    distinct[i] = count;
  }

  ll ans = accumulate(distinct.begin(), distinct.end(), 0);

  cout << ans << '\n';
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
