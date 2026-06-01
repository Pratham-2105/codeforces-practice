#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n; cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  
  ll ans = 1e9, sum = 0;

  for (int i = 0; i < n; ++i) {
    sum += arr[i];
    ans = min(ans, sum / (i + 1));

    cout << ans << " ";
  }

  cout << '\n';


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
