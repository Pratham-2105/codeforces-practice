#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  string n;
  cin >> n;

  vector<int> reduce;
  int sum = 0;

  for (int i = 0; i < n.size(); ++i) {
    int digit = n[i] - '0';

    sum += digit;

    if (i == 0)
      reduce.push_back(digit - 1);
    else
      reduce.push_back(digit);
  }

  if (sum < 10) {
    cout << 0 << '\n';
    return;
  }

  sort(reduce.begin(), reduce.end(), greater<int>());

  int count = 0;

  for (int x : reduce) {
    sum -= x;
    count++;

    if (sum < 10) {
      cout << count << '\n';
      return;
    }
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
