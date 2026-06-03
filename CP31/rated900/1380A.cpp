#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  int flag = 0;
  for (int j = 1; j < n - 1; ++j) {
    int i = -1;
    int k = -1;

    for (int left = 0; left < j; ++left) {
      if (arr[left] < arr[j]) {
        i = left;
        break;
      }
    }

    for (int right = j + 1; right < n; ++right) {
      if (arr[right] < arr[j]) {
        k = right;
        break;
      }
    }

    if (i != -1 && k != -1) {
      cout << "YES\n";
      cout << i + 1 << " " << j + 1 << " " << k + 1 << " " << "\n";
      flag = 1;

      break;
    }
  }

  if (flag == 0) {
    cout << "NO\n";
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
