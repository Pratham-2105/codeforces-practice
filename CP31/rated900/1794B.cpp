#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
      if (arr[i] == 1) {
        arr[i] += 1;
      }
    }

    for (int i = 0; i < n - 1; ++i){
      if (arr[i + 1] % arr[i] == 0) {
        arr[i + 1] += 1;
      }
    }

    for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
    }

    cout << "\n";

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
