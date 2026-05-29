#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int mx = *max_element(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == mx) count++;
    }

    cout << count << "\n";
    
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
