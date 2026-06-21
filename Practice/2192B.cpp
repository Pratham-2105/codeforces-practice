#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  int ones = 0, zeroes = 0;
  for (char ch : s) {
    if (ch == '1') {
      ones++;
    } else {
      zeroes++;
    }
  }

  if (zeroes % 2 == 1) {
    cout << zeroes << '\n';
    for (int i = 0; i < n; ++i) {
      if (s[i] == '0') {
        cout << i + 1 << " ";
      }
    }
    cout << '\n';
    return;
  } else if (ones % 2 == 0) {
    cout << ones << '\n';
    if (ones != 0) {
      for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
          cout << i + 1 << " ";
        }
      }
      cout << '\n';
    }
  } else {
    cout << -1 << "\n";
  }
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
