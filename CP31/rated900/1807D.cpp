#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n, q;
  cin >> n >> q;
  
  vector<ll> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ll old_sum = 0;
  for(int i = 0; i < n; ++i){
    old_sum += arr[i];
  }

  vector<ll> prefix(n + 1);
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + arr[i - 1];
  }


  while(q--) {
    ll l, r, k;
    cin >> l >> r >> k;

    ll prev_sum = prefix[r] - prefix[l - 1];
    ll new_sum = (r - l + 1) * k;
    ll total_sum = old_sum - prev_sum + new_sum;

    if (total_sum % 2 == 1)
      cout << "YES\n";
    else 
      cout << "NO\n";

  }

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
