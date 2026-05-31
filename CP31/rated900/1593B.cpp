#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int func(string n, string possible) {
  int ops = 0;
  int index = possible.size() - 1;

  for (int i = n.size() - 1; i >= 0; --i) {
    if(n[i] == possible[index]) {
      index--;

      if (index < 0)
        break;
    }

    else {
      ops++;
    }
  }

  if (index >= 0) 
    ops = INT_MAX;

  return ops;
}

void solve() {
  string n; cin >> n;

  vector<string> possible = {"00", "25", "50", "75"};
  int ans = INT_MAX;

  for (auto possible_value : possible) 
    ans = min(ans, func(n, possible_value));


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
