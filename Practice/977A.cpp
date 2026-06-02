#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n, k; cin >> n >> k;
  int temp = n;

  while(k--) {
    int mod = temp % 10;
    if (mod == 0) {
      temp /= 10;
    }
    else {
      temp -= 1;
    }
  }

  cout << temp << '\n';


  cout.flush();
  return;
}   

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while(t--) {
    solve();
  }
}
