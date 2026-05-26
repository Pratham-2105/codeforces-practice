#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int curr = 1, max_count = 1;
    for (int i = 0; i < n - 1; ++i) {
      if (abs(arr[i] - arr[i + 1]) <= k) {
        curr++;
      }
      else curr = 1;

      max_count = max(max_count, curr);
    }
    

    cout << n - max_count << "\n";
    
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
