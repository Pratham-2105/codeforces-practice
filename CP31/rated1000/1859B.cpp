#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <numeric>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  vector<ll> arr;
  ll first_min = INT_MAX;

  for (int i = 0; i < n; ++i) {
    ll m;
    cin >> m;

    vector<ll> temp(m);
    for (auto &x : temp) {
      cin >> x;
    }

    sort(temp.begin(), temp.end());

    arr.push_back(temp[1]);
    first_min = min(first_min, temp[0]);
  }

  sort(arr.begin(), arr.end());

  ll sum_of_second = accumulate(arr.begin(), arr.end(), 0LL);
  ll lowest_second_min = arr[0];

  ll ans = first_min + sum_of_second - lowest_second_min;

  cout << ans << '\n';

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
