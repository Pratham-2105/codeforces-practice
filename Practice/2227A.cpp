#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int x, y;
  cin >> x >> y;

  x %= 2;
  y %= 2;

  if (x + y == 1 || x + y == 0) {
    cout << "YES\n";
  }
  else {
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
