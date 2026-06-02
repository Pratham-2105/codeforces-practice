#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  int res = 0;
  string ans;
  
  for (int i = 0; i < n - 1; ++i) {
    int curr = 0;
    for (int j = 0; j < n - 1; ++j) {
      if(s[j] == s[i] && s[j + 1] == s[i + 1]) 
        curr++;
    }

    if (res < curr) {
      res = curr;
      ans = string(1, s[i]) + string(1, s[i + 1]);
    }
  }

  cout << ans << '\n';
  
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
