#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  vector<int> arr(7);
  for (int i = 0; i < 7; ++i)
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  int sum = 0;
  for (int i = 0; i <= 5; ++i) {
    sum -= arr[i];
  }

  sum += arr[6];

  cout << sum << "\n";

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
