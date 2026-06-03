#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

using ll = long long;

void solve() {
  string s;
  cin >> s;

  int n = s.size();

  int ones = 0;
  int zeros = 0;

  for (int i = 0; i < n; ++i) {
    if (s[i] == '1')
      ones++;
    else
      zeros++;
  }

  int count = min(ones, zeros);

  if (count % 2 == 1)
    cout << "DA\n";
  else
    cout << "NET\n";

  cout.flush();
  return;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }
}
