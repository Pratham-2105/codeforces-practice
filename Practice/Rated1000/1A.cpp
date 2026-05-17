#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, m, a;
    cin >> n >> m >> a;

    ll x = (n + a - 1) / a;
    ll y = (m + a - 1) / a;

    cout << x * y << endl;
    
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