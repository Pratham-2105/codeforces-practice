#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ans = min(ans, abs(x));
    }
    
    cout << ans << endl;
    
    return;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }
}