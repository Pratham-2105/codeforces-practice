#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> arr(n);

  for (ll i = 0; i < n; ++i) 
    cin >> arr[i];

  map<ll, ll> mp;
  for (ll i = 0; i < n; ++i) {
    mp[arr[i]]++;
  }

  ll current_highest_freq = 0;
  for (auto i : mp)
    current_highest_freq = max(current_highest_freq, i.second);

  ll ops = 0;
  while(current_highest_freq < n) {
    ops++;

    if (current_highest_freq * 2 <= n) {
      ops += current_highest_freq;
      current_highest_freq *= 2;
    }
    else {
      ops += n - current_highest_freq;
      current_highest_freq = n;
    }
  }

  cout << ops << '\n';

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
