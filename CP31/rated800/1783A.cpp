#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    if (arr[0] == arr[n - 1]) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      cout << arr[n - 1] << "\n";
      for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
      }
      cout << "\n";
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
