#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  string s; cin >> s;
  int n = s.size();

  if (s[0] != s[n - 1]) {
    if(s[0] == 'a') {
      s[0] = 'b';
    }
    else {
      s[0] = 'a';
    }
  }

  cout << s << '\n';

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
