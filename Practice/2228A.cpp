#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    int count = 0;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) {
      sum += arr[i];
      if (arr[i] == 0) {
        count++;
        continue;
      }

      if (sum % 3 == 0) {
        sum = 0;
        count++;
      }


    }

    cout << count << '\n';
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
