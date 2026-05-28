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
    

    int k = abs(arr[0] - 1);
    for (int i = 0; i < n - 1; ++i) {
      k = gcd(k, abs(arr[i] - (i + 1)));
    }

    cout << k << "\n";
    
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
