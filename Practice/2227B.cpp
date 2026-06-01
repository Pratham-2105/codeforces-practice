#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  int open = 0;
  int close = 0;

  for (int i = 0; i < n; i++) {
    if(s[i] == '(') 
      open++;
    else
      close++;
  }

  if (open == close)
    cout << "YES\n";
  else 
    cout << "NO\n";


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
