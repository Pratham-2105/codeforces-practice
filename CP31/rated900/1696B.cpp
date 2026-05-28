#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n; cin >> n;
  vector<ll> arr(n);

  int count_of_zeros = 0;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    if (arr[i] == 0) {
      count_of_zeros++;
    }
  }

  if (count_of_zeros == n) {
    cout << 0 << '\n';
    return;
  }  

  bool found_zero = false;
  int left = 0, right = n - 1;

  while(arr[left] == 0) left++;
  while(arr[right] == 0) right--;

  for (int i = left; i <= right; i++) {
    if (arr[i] == 0) {
      found_zero = true;
    }
  }

  if (found_zero == false) {
    cout << 1 << '\n';
  }
  else {
    cout << 2 << '\n';
  }

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
