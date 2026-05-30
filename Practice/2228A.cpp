#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n; cin >> n;

  int zeros = 0;
  int ones = 0;
  int twos = 0;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;

    if (x == 0) zeros++;
    else if (x == 1) ones++;
    else twos++;
  
  }

  int ans = zeros;
  int pairs = min(ones, twos);

  ans += pairs;

  ones -= pairs;
  twos -= pairs;

  ans += ones / 3;
  ans += twos / 3;

  cout << ans << '\n';

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
