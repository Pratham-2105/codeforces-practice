#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<ll> arr(n);

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  sort(arr.rbegin(), arr.rend());
  bool ok = true;

  for (int i = 0; i < n - 2; i++) {
    if (arr[i + 2] != arr[i] % arr[i + 1]) {
      ok = false;
      break;
    }
  }

  if (ok) {
    cout << arr[0] << " " << arr[1] << '\n';
  } else {
    cout << -1 << "\n";
  }
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
