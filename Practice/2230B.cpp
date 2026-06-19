#include <bits/stdc++.h>
#include <cinttypes>
using namespace std;

using ll = long long;

void solve() {
  string s;
  cin >> s;

  int pref2 = 0, suff = 0;

  for (int i = 0; i < s.size(); ++i) {
    char curr = s[i];

    if (curr == '1' || curr == '3') {
      suff++;
    }
  }

  int ans = pref2 + suff;
  for (int i = 0; i < s.size(); ++i) {
    char curr = s[i];

    if (curr == '2') {
      pref2++;
    } else if (curr == '1' || curr == '3') {
      suff--;
    }

    ans = max(ans, pref2 + suff);
  }

  cout << s.size() - ans << "\n";

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
