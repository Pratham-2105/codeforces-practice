#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> arr(n);

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  ll total_AND = arr[0];
  for (int i = 1; i < n; ++i) {
    total_AND &= arr[i];
  }
  
  cout << total_AND << '\n';

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
