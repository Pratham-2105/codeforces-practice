#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll x, y;
    cin >> x >> y;

    if (2 * x < y) {
      cout << "YES\n";
    }
    else {
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

    while(t--) {
        solve();
    }
}
