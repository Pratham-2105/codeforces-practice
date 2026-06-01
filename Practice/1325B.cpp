#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n; cin >> n;
  set<int> d;
  
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    d.insert(x); 
  }

  cout << d.size() << "\n";

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
